#include <stdio.h>
#include "utils.h"

int main()
{
    // learn to read a file (CTF context using FLAG)
    FILE *pFlag = fopen("flag.txt", "r"); // use r to read file
    char buffer[2046] = {0};

    if (pFlag == NULL)
    {
        printf("File not found!");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), pFlag) != 0)
    {
        printf("%s", buffer);
    }
    fclose(pFlag);

    return 0;
}