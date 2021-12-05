#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    //Variables
    int port_number = atoi(argv[1]); // port number getting from command line and convert to integer
    int client_socket, server_socket;
    char server_message[256] = "\nPort of Server: ";
    char server_response[256];
    char connection_made[256] = "Conection made";
    char ouput_message[256] = "Server sent message";

    //Creating socket (AF_INET = IPv4, SOCK_STREAM = TCP)
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    //check socket
    if (server_socket == 0)
    {
        perror("Socket Error");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(port_number); //porn number getting from comman line
    server_address.sin_addr.s_addr = INADDR_ANY;

    bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    // check comnnection 
    if (listen(server_socket, 5) < 0)
    {
        perror("Listen Error");
        exit(EXIT_FAILURE);
    }

    client_socket = accept(server_socket, NULL, NULL);

    // check comnnection 
    if (client_socket < 0)
    {
        perror("Accept Error");
        exit(EXIT_FAILURE);
    }

    //message merged (Port of Server + Entered Port Number)
    strcat(server_message, argv[1]);
    send(client_socket, server_message, sizeof(server_message), 0);

    recv(client_socket, &server_response, sizeof(server_response), 0);
    printf("The client sent the data : %s\n", server_response);

    send(client_socket, connection_made, sizeof(connection_made), 0);
    while (1)
    {
        recv(client_socket, &server_response, sizeof(server_response), 0);
        printf("The data is sent by client : %s\n", server_response);
        send(client_socket, ouput_message, sizeof(ouput_message), 0);
	
	//Value comparison
        if (strcmp(server_response, "exit") == 0)
        {
            printf("Connection terminated\n");
            break;
        }
    }

    //closing the socket
    close(server_socket);
    return 0;
}
