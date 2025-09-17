#include <stdio.h>
#include <ctype.h>

int main() {
    int scoops;
    char addSprinkles;
    double total = 0.0;

    printf("How many scoops do you want (1, 2, or 3)? ");
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
        printf("That’s not a valid scoop choice.\n");
        return 0;
    }

    printf("Would you like sprinkles on top (Y/N)? ");
    scanf(" %c", &addSprinkles);
    addSprinkles = toupper(addSprinkles);

    if (addSprinkles == 'Y') {
        total += 0.75;
    }

    printf("Your final total is: $%.2f\n", total);
    return 0;
}
