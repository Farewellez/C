#include <stdio.h>

int main()
{
    // learning how to make and write a file (.txt)
    FILE *pFile = fopen("flag.txt", "w"); // -> r: read; w: write; 
    
    if (pFile == 0)
    {
        printf("Error opening file!");
        return 1; // -> there is a error
    }
    fprintf(pFile, "%s", "WALLNUT{hELLO_w0RLD!}");
    printf("File written successfully!");
    
    fclose(pFile); // dont forget to close it
    return 0; // -> there is no error
}