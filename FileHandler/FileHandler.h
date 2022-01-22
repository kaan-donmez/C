#ifndef __FILE_HANDLER__
#define __FILE_HANDLER__

#include <stdio.h>
#include <string.h>

void WriteFile(const char *restrict fileName, char *dataToBeWritten);
char ReadFile(const char *restrict fileName);

#endif __FILE_HANDLER__
