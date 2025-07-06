#include <stdio.h>

int main()
{
    // learning about arithmetic operators = + - / * % ++ --

    // defining the variable
    int x = 10;
    int y = 2;
    int z;

    // begin the arithmetic operators
    z = x + y; 
    printf("x(%d) + y(%d) = z(%d)\n",x, y, z);
    z = x - y; 
    printf("x(%d) - y(%d) = z(%d)\n",x, y, z);
    z = x * y; 
    printf("x(%d) x y(%d) = z(%d)\n",x, y, z);
    z = x / y; 
    printf("x(%d) x y(%d) = z(%d)\n",x, y, z);
    z = x % y; 
    printf("x(%d) %% y(%d) = z(%d)\n",x , y, z);
    
    printf("\nx (sebelum) = %d\n", x);
    x ++; 
    printf("x++ (sesudah)= %d\n", x);

    printf("y (sebelum) = %d\n", y);
    y --;
    printf("y-- (sesudah)= %d", y); 

    return 0;
}