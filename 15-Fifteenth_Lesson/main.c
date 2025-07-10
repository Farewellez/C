#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "utils.h"

// validating the answer
int flag(int number)
{
    // variable
    int min = 1;
    int max = 10;

    srand(time(NULL));
    int random_number = rand() % (max - min + 1) + min;

    if (number != random_number)
    {
        // compare the input
        printf("%d\n", random_number);
        return false;
    }
    else
    {
        printf("%d\n", random_number);
        return true;
    }
}

int main()
{
    clearTerminal();

    // user input
    int number_user;
    printf("Hey try to guess number between 1 - 10\n-> ");
    scanf("%d", &number_user);

    while (!flag(number_user))
    {
        clearTerminal();
        printf("Try again :(...\n-> ");
        scanf("%d", &number_user);
    }
    printf("WALLNUT{Its_4bo0utLucky!}");
}