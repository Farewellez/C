#include <stdio.h>
#include <stdlib.h>

int main()
{
    // learning about calloc function
    // calloc() -> Contiguous Allocation
    //             Allocates memory dynamically and sets all allocated bytes to 0
    //             malloc() is faster, but calloc() lead to less bugs
    //             calloc(#, size)
    
    // first need to create the count of memory that going to be used by user 
    int number;
    printf("Enter the number of player: \n-> ");
    scanf("%d", &number);

    // before we used memory allocation like this
    // int *scores = malloc(number * sizeof(int)) -> the memory that the user's need is number (ex: 7) x size of integer: 4
    // 7x4 = 28 bytes

    // create a calloc function
    int *scores = calloc(number, sizeof(int)); // using pointer to referencing at memory address

    if (scores == NULL)
    {
        printf("Memory allocated failed!");
        return 1; // -> error handling to segmentation fault
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]); // the scores is dont have a value right now but the values is set into 0
        // input number: 4
        // -> score values: 0 0 0 0
        // its avoid undefined behaviour

        // if you using this
        printf("%p ", scores);
        // you will se the memory address of scores
    }
    
    free(scores);
    scores = NULL;

    return 0;
}