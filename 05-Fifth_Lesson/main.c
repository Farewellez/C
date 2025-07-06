#include <stdio.h>
#include <stdlib.h> // to make an input
#include <string.h> // to get a length count

int main()
{
    // learn to avoid input overflow
    system("cls"); // to clear the terminal

    // using scanf to save the user's input
    // 
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter a age: ");
    // input = 12
    scanf("%d", &age); // -> in buffer = [1,2,\n (sisa)]

    printf("Enter your gpa: ");
    // input = 3.8
    scanf("%f", &gpa); // -> in buffer = [3, ., 8, \n (sisa)]
    
    printf("Enter your grade: ");
    // input = a
    scanf(" %c", &grade); // -> in buffer = [(skipped by white space), a, \n (sisa))]
    getchar(); // to grab a \n in the end of scanf

    printf("Enter your full name: ");
    // input = ahmad zafarell
    // scanf("%s", &name); // -> in buffer = [(sisa sebelumnya), a, h, m, a, d, (white space), z, a, f, a, r, e, l, l, \n]
    // because of white space it will stop in buffer so we can use another function fgets
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // -> akan mengubah \n menjadi \0
    // getchar(); // useless


    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}