#include <stdio.h>
#include <string.h>

void WriteFile(const char *restrict fileName, char *dataToBeWritten)
{
  FILE *filePointer;
  filePointer = fopen(fileName, "w");
  if (filePointer == NULL)
  {
    printf("%s doesn't open.", fileName);
  }
  else
  {

    printf("The file is opened.\n");

    if (strlen(dataToBeWritten) > 0)
    {
      fputs(dataToBeWritten, filePointer);
      fputs("\n", filePointer);
    }

    fclose(filePointer);

    printf("Data successfully written in file %s\n", fileName);
    printf("The file is closed.");
  }
}

int main()
{

  WriteFile("Files/File.txt", "Hello World");
  return 0;
}
