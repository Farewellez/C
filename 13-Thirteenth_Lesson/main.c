#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "utils.h"

// make a function prototype
int flag1(char answer[]);

int main()
{
    clearTerminal();
    // Let's get acquainted with Unix time stamp
    // variable
    char user_answer[20] = ""; 

    // some hexa code?
    printf("22 30 31 37 35 32 30 37 30 38 38 32 22 20 68 6d 6d 20 73 65 70 65 72 74 69 6e 79 61 20 62 75 6b 61 6e 20 74 69 6d 65 73 74 61 6d 70 20 79 61 6e 67 20 62 65 6e 61 72 0a 62 69 73 61 6b 61 68 20 6b 61 6d 75 20 75 62 61 68 20 6b 65 20 22 54 68 75 72 73 64 61 79 2c 20 4a 61 6e 75 61 72 79 20 31 2c 20 31 39 37 30 22 3f\n-> ");
    
    // take user input
    fgets(user_answer, sizeof(user_answer), stdin);
    user_answer[strcspn(user_answer, "\n")] = '\0';

    // distribute to other function
    if (strlen(user_answer) >= 0)
    {
        // send to other function
        int result = flag1(user_answer);

        if (result == 1)
        {
            printf("WALLNUT{d0_yoOu_kN0wAbo0ut_UNIX_tim3St4mp?}");
        }
        else
        {
            printf("Check your answer dude...one char is enough");
        }
    }
    else
    {
        printf("Check your answer dude...one char is enough...");
    }

    return 0;
}

int flag1(char answer[])
{
    // the answer's key
    char key[] = "0";

    // validate the user's input
    if (strcmp(answer, key) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}