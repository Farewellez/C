#include <stdio.h>
#include <math.h>

int main()
{
    // learning about math function
    float number = 3.14f; // example variable
    float minus_number = -3.14f; // example minus variable
    printf("The number is: %.2f", number);

    // testing math function
    float number1 = sqrt(number); // using sqrt function
    float number2 = pow(number, 2); // using pow function
    float number3 = round(number); // using round
    float number4 = ceil(number); // using ceil to round always up
    float number5 = floor(number); // using floor to round always down
    float number6 = abs(minus_number); // using abs to absolute
    float number7 = log(number); // using log for logarithm
    float number8 = sin(number); // using sin for sinus 
    float number9 = cos(number); // using cos for cosinus 
    float number10 = tan(number); // using tan for tangen 


    // show output
    printf("\n\nThe %.2f sqrt: %f", number, number1);
    printf("\nThe %.2f power 2: %f", number, number2);
    printf("\nThe %.2f round: %.1f",number, number3);
    printf("\nThe %.2f ceil: %.1f",number, number4);
    printf("\nThe %.2f floor: %.1f",number, number5);
    printf("\nThe %.2f abs: %.1f",minus_number, number6);
    printf("\nThe %.2f log: %.1f",number, number7);
    printf("\nThe %.2f sin: %.1f",number, number8);
    printf("\nThe %.2f cos: %.1f",number, number9);
    printf("\nThe %.2f tan: %.1f",number, number10);

    return 0;
}