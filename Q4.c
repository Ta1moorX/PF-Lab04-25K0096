#include <stdio.h>

int main() {
    int scoops, coneType;
    double total = 0.0;

    // Ask for scoops
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

    // Ask for cone type
    printf("Select cone type:\n 1. Regular (+$0.50)\n 2. Waffle (+$1.00)\nYour choice: ");
    scanf("%d", &coneType);

    if (coneType == 1) {
        total += 0.50;
    } 
    else if (coneType == 2) {
        total += 1.00;
    } 
    else {
        printf("That cone option is not available.\n");
        return 0;
    }

    printf("Final bill: $%.2f\n", total);
    return 0;
}
