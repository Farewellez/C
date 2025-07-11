#include <stdio.h>
#include <stdbool.h>

int main()
{
    // learning about variabel in C

    // make a variable with data type
    int age = 19;
    float gpa = 3.8;

    printf("I'am %d years old", age);
    printf("\nMy GPA is: %.1f", gpa);

    // Testing different between float and double
    // 23 bit (6-7 digit desimal)
    float NumberF = 9.14159265358979323846;
    // 52 bit (15-16 digit desimal)
    double NumberD = 9.14159265358979323846;
    
    printf("\n\nThis is float: %.20f", NumberF);
    printf("\nThis is double: %.20lf", NumberD);

    // char data type
    char grade = 'C';
    printf("\n\nMy grade in operating system is %c", grade);
    
    // string data type (in another language) and array of character (array of chars) -> char <variabel name>[] = "<value>"
    char hobbies[] = "hacking!";
    printf("\nMy hobbies is %s", hobbies);

    // playing with boolean data type (boolean is a binary -> true or false)
    bool isActive = true;
    bool isNonActive = false;
    // using decimal/integer to represent a boolean value. Either 1 or 0 (representation of true or false)
    printf("\nThis is true: %d", isActive);
    printf("\nThis is false: %d", isNonActive);

    /* Conclusion
    integer/int -> %d : whole numbers (4 bytes in modern system)
    float -> %f : single-precision decimal number (4 bytes)
    double -> %lf : double-precision decimal number (8 bytes)
    char -> %c : single character (1 bytes)
    char[] -> char <variabel name>[] -> array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
    */
    return 0;
}