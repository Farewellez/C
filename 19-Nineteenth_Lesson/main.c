#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // learning about malloc() function that dinamically allocates a
    // specified number of bytes in memory
    // take the number of grades
    int number = 0;
    printf("Enter a number of grades: ");
    scanf("%d", &number);

    // using malloc function to allocate the char of user input
    char *grade = malloc(number * sizeof(char)); // multiply the number of data to input with size of type char (1)

    if (grade == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Input the grade #%d ", i + 1);
        scanf(" %c", &grade[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%c ", grade[i]);
    }

    free(grade); // returning rented space "back" to the OS
    grade = NULL; // avoids dangling pointers

    return 0;
}