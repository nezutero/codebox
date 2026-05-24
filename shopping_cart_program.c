#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Enter the price of the item: ");
    scanf("%f", &price);

    printf("Quantity?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Your total is: %c%.2f, for %d %s/s\n", currency, total, quantity, item);

    return 0;
}
