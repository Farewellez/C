#include <stdio.h>

int main()
{
    // learn about optional modifiers (width, precision and flags) 
    // to control how data displayed or interpreted

    // example integer variable
    int age = 01;
    int Positive = 100;
    int Negative = -100;
    
    // implementing a width that specifies the minimum number of character
    printf("no minimum value of char: %d\n", age); // no minimum number of char
    printf("minimum 1 value of char: %1d\n", age); // there's 1 minimum number of char
    printf("minimum 2 value of char: %2d\n", age); // there's 2 minimum number of char

    // also rather have a space value it can be filled by zero (0)
    printf("\nminimum 1 value of char: %01d\n", age); // there's must be 1 minimum number of char
    printf("minimum 2 value of char: %02d\n", age); // there's must be 2 minimum number of char

    // another specifies the values either positive or negative
    printf("\npositive number: %+d\n", Positive);
    printf("negative number: %+d\n", Negative);

    // implementing precision
    float number1 = 19.56;

    // to rounding a number of float
    printf("\n19.56 rounding (max 1 value after coma): %.1f\n", number1);
    printf("19.56 without rounding (max 2 value after coma): %.2f\n", number1);

    return 0;
}