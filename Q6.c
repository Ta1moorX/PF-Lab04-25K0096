#include <stdio.h>

int main() {
    int scoops, weekday;
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
        printf("Scoop amount not recognized.\n");
        return 0;
    }

    // Ask for day of week
    printf("Enter the day of the week (1=Mon ... 7=Sun): ");
    scanf("%d", &weekday);

    // Weekend discount
    if (weekday == 6 || weekday == 7) {
        total = total - (total * 0.10);
        printf("Weekend deal applied! 10%% off.\n");
    }

    printf("Final total: $%.2f\n", total);
    return 0;
}
