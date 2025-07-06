#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    // shopping cart program
    // some variable
    char items[50] = ""; // take the item's input
    int quantity = 0; // take the quantity's input
    float cost = 0.0f; // take the cost's input
    double total_cost = 0.0; // take the cost * quantity

    // get item's input
    printf("What item you want to add?\n-> "); // just to specifically the input
    fgets(items, sizeof(items), stdin); // get user's input
    items[strlen(items) - 1] = '\0';
    system("cls"); // clear the terminal

    // get quantity of items
    printf("How many %s you want to add?\n-> ", items); // just to specifically the input
    scanf("%d",&quantity); // get user's input
    system("cls"); // clear terminal

    // get cost of items
    printf("How much cost of %s you want to add?\n-> ", items); // just to specifically the input
    scanf("%f", &cost); // get user's input
    system("cls");
    total_cost = cost * quantity; // total cost

    // show output
    printf("Items: %s\n", items); // show items output
    printf("Quantity: %d\n", quantity); // show quantity output
    printf("Cost: $%.2f\n", cost); // show the cost output
    printf("Total cost: $%.2lf", total_cost); // show the output's total

    return 0;
}