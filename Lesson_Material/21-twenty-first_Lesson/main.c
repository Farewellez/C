#include <stdio.h>
#include <stdlib.h>

int main()
{
    // learning about realloc to resize previously allocated memory
    // in oreder to modificating the previous size of memory with temporary variable
    
    int number; // -> number the size of memory will allocated
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    // allocate memory using "malloc" cause we will ask the input from user
    float *prices = malloc(number * sizeof(float));

    // if-else statement is the memory address's is NULL
    // to avoid segmentation vault
    if (prices == NULL)
    {
        printf("Memory allocated fails!");
        return 1;
    }
    // insert the values
    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    // try to use realloc() to resize the prices memory
    // using temp variable
    int newNumber;
    printf("Enter the new number of prices: ");
    scanf("%d", &newNumber);

    // start to reallocate
    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("Cannot reallocate the memory!");
        // try to still showing input of previously variable so we dont return 1
    }
    else
    {
        prices = temp;
        temp = NULL; // -> cause its temporary
        for (int i = number; i < newNumber; i++)
        {
            printf("Enter the prices #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }
    }
    // make the number value;s = 0
    number = 0;
    
    for (int i = 0; i < newNumber; i++)
    {
        printf("%d) ", i + 1);
        printf("%.2f\n", prices[i]);
    }

    free(prices); // free the memory in heap
    prices = NULL; // reset the value of prices

    return 0;
}