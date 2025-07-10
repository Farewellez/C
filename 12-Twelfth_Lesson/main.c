#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "utils.h"

int flag(char answer[])
{
    if (answer[0] == 'y')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    clearTerminal();   
    // try return value of function
    // variable
    char user_answer[2] = "";

    // take the user's input
    printf("Would you like to help me?\n[y/n] -> ");
    fgets(user_answer, sizeof(user_answer), stdin);
    user_answer[strcspn(user_answer, "\n")] = '\0';

    // show result
    if (strlen(user_answer) == 1 && user_answer[0] == 'y' || user_answer[0] == 'n')
    {
        int result = flag(user_answer);
        
        // validate answer
        if (result == 1)
        {
            printf("WALLNUT{Th4ts_rIght!_D0nttRust_o0therPeople!}");
        }
        else
        {
            printf("Aww, thanks...");
        }
    }
    else
    {
        printf("I don't understand what you're talking about...");
    }

}