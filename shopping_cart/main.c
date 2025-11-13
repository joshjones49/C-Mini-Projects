// SHOPPING CART PROGRAM

#include <stdio.h>
#include <windows.h>

int main() {

    char item[20] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0;

    char greeting[40] = "Welcome to the C-Mart Shopping Program!\n";
    char askWhatItemToBuy[40] = "What item would you like to buy?: "; 
    char askForPrice[30] = "What is the price for each?: ";
    char askForQuantity[30] = "How many would you like?: ";

    printf(greeting);

    printf(askWhatItemToBuy);
    fgets(item, sizeof(item), stdin);

    printf(askForPrice);
    scanf("%f", &price);

    printf(askForQuantity);
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Your total is: $%.2f", total);

    return 0;
}