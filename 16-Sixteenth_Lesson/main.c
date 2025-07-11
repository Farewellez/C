#include <stdio.h>
#include "utils.h"

void birthday(int* age); // telling the compiler that the parameter is referencing into the memory

int main()
{
    /* learn about pointer -> variable that store the memory address of another variable
                              Benefit: Help to avoid wasting memory by allowing you to pass
                              the address of large data structure instead of copying the entire data
    */

    // example variable
    int age = 12;
    int *pAge = &age; // referencing an address in memory
    birthday(pAge); // passing by reference

    // show output
    printf("\n%p\n", &age); // -> 00000051A89FFDF4: the address of variable in memory
    // printf("\n%p\n", pAge); // -> 00000051A89FFDF4: same thougth
    printf("%d", age);
    return 0;
}

void birthday(int* age) // telling the compiler that the parameter is referencing into the memory
{
    printf("%p", age);
    (*age)++; // dereference and accessing the value in memory's address
}