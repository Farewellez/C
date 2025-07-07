#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include <string.h>

int main()
{
    clearTerminal();
    // create another CTF game to implementing the switch case
    // variable
    char answer[10] = "";
    char _answer;
    
    printf("Hello iam AHA..Lets play a game!!! (^_^)");
    printf("\nCan you guess where is the FLAG is between this alphabet?");
    printf("\nA B C D E -> ");
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = '\0';
    
    if (strlen(answer) == 1 && answer[0] == 'A' || answer[0] == 'B' || answer[0] == 'C' || answer[0] == 'D' || answer[0] == 'E')
    {
        _answer = answer[0];
        switch (_answer)
        {
        case 'A':
            printf("WALLNUT{F1rst_");
            break;
        case 'B':
            printf("st1ll_fAr");
            break;
        case 'C':
            printf("_H3ree_An0tHer4_y0U");
            break;
        case 'D':
            printf("_KeEpG0ing_jUStAl1iitle");
            break;
        case 'E':
            printf("_T3hereU_GoOo}");
            break;
        default:
            printf("invalid input dawg...");
            break;
        }
    }
    else
    {
        // printf("\n%s\n", answer);
        printf("Check your input!");
    }
}   