#include <stdio.h>

int main() {
    int scoops, coneType;
    char addSprinkles;
    double total = 0.0, sprinklePrice = 0.75;

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
        printf("Scoop option not valid.\n");
        return 0;
    }

    // Ask for cone
    printf("Pick your cone:\n 1. Regular (+$0.50)\n 2. Waffle (+$1.00)\nChoice: ");
    scanf("%d", &coneType);

    if (coneType == 1) {
        total += 0.50;
    } 
    else if (coneType == 2) {
        total += 1.00;
    } 
    else {
        printf("Cone selection not valid.\n");
        return 0;
    }

    // Ask about sprinkles
    printf("Would you like sprinkles (Y/N)? ");
    scanf(" %c", &addSprinkles);

    if ((scoops == 3 && coneType == 2) && (addSprinkles == 'Y' || addSprinkles == 'y')) {
        printf("Bonus deal: free sprinkles with 3-scoop waffle cone!\n");
        sprinklePrice = 0.0;
    }

    if (addSprinkles == 'Y' || addSprinkles == 'y') {
        total += sprinklePrice;
    }

    printf("Final total: $%.2f\n", total);
    return 0;
}
