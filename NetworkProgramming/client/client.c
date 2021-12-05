#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //Variables
    char server_message[256] = "\nIP of Client: ";
    int port_number = atoi(argv[2]); // port number getting from command line and convert to integer
    char server_response[256];
    int network_socket;
    struct sockaddr_in server_address;
    char input_messsage[256];

    //Creating socket (AF_INET = IPv4, SOCK_STREAM = TCP)
    network_socket = socket(AF_INET, SOCK_STREAM, 0);

    //check socket
    if (network_socket < 0)
    {
        perror("\n Socket Creation Error");
        exit(EXIT_FAILURE);
    }

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(port_number); // port number getting from command line
    server_address.sin_addr.s_addr = INADDR_ANY;

    int connect_status = connect(network_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    // check comnnection
    if (connect_status == -1)
    {
        perror("Connection Error");
        exit(EXIT_FAILURE);
    }

    //recieve the data from the server
    recv(network_socket, &server_response, sizeof(server_response), 0);
    printf("Ther server sent the data : %s\n", server_response);

    //message merged (IP of Client + Entered IP)
    strcat(server_message, argv[1]);
    send(network_socket, server_message, sizeof(server_message), 0);

    recv(network_socket, &server_response, sizeof(server_response), 0);
    printf("%s\n", server_response);

    while (1)
    {
        printf("Please enter a message: ");
        scanf("%s", input_messsage);
        send(network_socket, input_messsage, sizeof(input_messsage), 0);
        recv(network_socket, &server_response, sizeof(server_response), 0);
        printf("%s\n", server_response);
        if (strcmp(input_messsage, "exit") == 0)
        {
            printf("Connection terminated\n");
            break;
        }
    }

    //closing the socket
    close(network_socket);
    return 0;
}
