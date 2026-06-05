#include <stdio.h>
#include <stdbool.h>

int main() {
    int choice = 0;
    float kilograms = 0.0;
    float pounds = 0.0;

    printf("--- Weight Converter ---\n");
    printf("Options (1 or 2):\n(1) Kilograms -> Pounds\n(2) Pounds -> Kilograms\n ");
    scanf("%d",&choice);
    
    if (choice == 1) {
        printf("Enter the # to convert (kg -> lb): ");
        scanf("%f",&kilograms);

        pounds = kilograms * 2.2046;
        printf("%.2f kg = %.2f lb\n", kilograms, pounds);

    } else if (choice == 2) {
        printf("Enter the # to convert (lb -> kg): ");
        scanf("%f",&pounds);

        kilograms = pounds / 2.2046;
        printf("%.2f lb = %.2f kg\n", pounds, kilograms);

    } else {
        printf("Wrong input\n");
        return 1;
    }
    
    return 0;
}
