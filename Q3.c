#include <stdio.h>

int main() {
    int scoops;
    double total = 0.0;

    printf("Choose how many scoops you want (1, 2, or 3): ");
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
        printf("That scoop option doesn’t exist.\n");
        return 0;
    }

    printf("Order placed: %d scoop(s). Amount due: $%.2f\n", scoops, total);
    return 0;
}
