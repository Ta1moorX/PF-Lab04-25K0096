#include <stdio.h>

int main() {
    int flavor, scoops, coneType, weekday, customerAge, payMethod;
    char addSprinkles;
    float total = 0.0;

    // Flavor choice
    printf("Pick a flavor (1. Vanilla, 2. Chocolate, 3. Strawberry): ");
    scanf("%d", &flavor);

    if (flavor == 1) {
        printf("Vanilla selected.\n");
    }
    else if (flavor == 2) {
        printf("Chocolate selected.\n");
    }
    else if (flavor == 3) {
        printf("Strawberry selected.\n");
    }
    else {
        printf("Flavor option not valid.\n");
        return 0;
    }

    // Scoops
    printf("How many scoops (1, 2, or 3)? ");
    scanf("%d", &scoops);

    if (scoops == 1) {
        total = 2.0;
    }
    else if (scoops == 2) {
        total = 3.5;
    }
    else if (scoops == 3) {
        total = 4.5;
    }
    else {
        printf("Invalid scoop number.\n");
        return 0;
    }

    // Cone
    printf("Choose a cone type:\n 1. Regular (+$0.50)\n 2. Waffle (+$1.00)\nYour choice: ");
    scanf("%d", &coneType);

    if (coneType == 1) {
        total += 0.5;
    }
    else if (coneType == 2) {
        total += 1.0;
    }
    else {
        printf("Cone type not valid.\n");
        return 0;
    }

    // Sprinkles
    printf("Would you like sprinkles (Y/N)? ");
    scanf(" %c", &addSprinkles);

    if (addSprinkles == 'Y' || addSprinkles == 'y') {
        if (scoops == 3 && coneType == 2) {
            printf("Special deal: sprinkles are free!\n");
        } else {
            total += 0.75;
        }
    }

    // Weekend discount
    printf("Enter day of the week (1=Mon ... 7=Sun): ");
    scanf("%d", &weekday);

    if (weekday == 6 || weekday == 7) {
        total = total - (total * 0.10);
        printf("Weekend discount applied (10%% off).\n");
    }

    // Age discount
    printf("Enter your age: ");
    scanf("%d", &customerAge);

    if (customerAge < 12) {
        total -= 1.0;
        if (total < 0) {
            total = 0; // prevent negative total
        }
        printf("Child discount applied.\n");
    }

    // Payment method
    printf("Payment option (1. Cash, 2. Card): ");
    scanf("%d", &payMethod);

    if (payMethod == 2) {
        total += 0.5;
        printf("Card fee added.\n");
    }

    // Receipt
    printf("\n------ RECEIPT ------\n");
    if (flavor == 1) printf("Flavor: Vanilla\n");
    if (flavor == 2) printf("Flavor: Chocolate\n");
    if (flavor == 3) printf("Flavor: Strawberry\n");
    printf("Scoops: %d\n", scoops);
    printf("Cone: %s\n", coneType == 1 ? "Regular" : "Waffle");
    printf("Sprinkles: %s\n", (addSprinkles == 'Y' || addSprinkles == 'y') ? "Yes" : "No");
    printf("Day: %d\n", weekday);
    printf("Age: %d\n", customerAge);
    printf("Payment: %s\n", payMethod == 1 ? "Cash" : "Card");
    printf("Total Due: $%.2f\n", total);

    return 0;
}
