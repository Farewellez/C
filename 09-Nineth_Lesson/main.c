#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main()
{
    // try to making a CTF game
    clearTerminal();

    // variable
    char answer[10] = "";

    printf("wellcome friends...\n");
    printf("I was riding my bike this morning on 22 february 2025. Today's weather is so nice and the sun is shining.");
    printf("By the way my friends suddenly asked me \"do you know the value of 1 + 1 is 3?\"\nis it true (y) or false (n)? -> ");
    fgets(answer,sizeof(answer),stdin);
    answer[strcspn(answer, "\n")] = '\0';

    if (strlen(answer) == 1 && answer[0] == 'y' || answer[0] == 'n')
    {
        if (answer[0] == 'y')
        {
            printf("\n\nWALLNUT{H4ppy_Rev3rse_daa4yyy!!!}\n\n");
        }
        else
        {
            printf("\nHmm is that so...okey thanks!!!");
        }
    }
    else
    {
        printf("i dont know what are you talking about...");
    }
    return 0;
}