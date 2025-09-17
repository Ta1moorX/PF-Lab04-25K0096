#include <stdio.h>

int main() {
    int scoops, customerAge;
    double total = 0.0;

    // Ask for number of scoops
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
        printf("Scoop selection not valid.\n");
        return 0;
    }

    // Ask for age
    printf("Please enter your age: ");
    scanf("%d", &customerAge);

    // Apply discount for kids under 12
    if (customerAge < 12) {
        total -= 1.00;
        if (total < 0) {
            total = 0; // prevent negative billing
        }
        printf("Child discount applied!\n");
    }

    printf("Final price: $%.2f\n", total);
    return 0;
}
