#include <stdio.h>

int main() {
    int scoops, payMethod;
    double total = 0.0;

    // Ask user for scoops
    printf("How many scoops would you like (1, 2, or 3)? ");
    scanf("%d", &scoops);

    if (scoops == 1) {
        total = 2.00;
    } 
    else if (scoops == 2) {
        total = 3.50;
    } 
    else if (scoops == 3) {
        total = 4.50;
    } 
    else {
        printf("That scoop option isn’t available.\n");
        return 0;
    }

    // Ask for payment method
    printf("Select payment type:\n 1. Cash\n 2. Card (+$0.50 fee)\nChoice: ");
    scanf("%d", &payMethod);

    if (payMethod == 2) {
        total += 0.50;
        printf("Card processing fee applied.\n");
    }

    printf("Your final bill is: $%.2f\n", total);
    return 0;
}
