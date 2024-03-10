#include <stdio.h>

// The three main functions
void getPrices(float *price1, float *price2, float *price3);
void swap(float *a, float *b);
int main();

int main() {
    float price1;
    float price2;
    float price3;

    getPrices(&price1, &price2, &price3);
    printf("The three prices are: %.2f %.2f %.2f\n", price1, price2, price3);

    return 0;
}

// Function to swap two floats
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// prompt the user to input all three prices and return them to the caller
void getPrices(float *price1, float *price2, float *price3) {
    // Prompt user input of prices
    printf("Enter the price of item 1: ");
    scanf("%f", price1);
    printf("Enter the price of item 2: ");
    scanf("%f", price2);
    printf("Enter the price of item 3: ");
    scanf("%f", price3);

    // Reorder prices
    if (*price1 > *price2) {
        swap(price1, price2);
    }

    if (*price2 > *price3) {
        swap(price2, price3);
    }

    if (*price1 > *price2) {
        swap(price1, price2);
    }
}
