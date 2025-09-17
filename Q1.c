#include <stdio.h>

int main() {
    int choice;
    printf("Select an ice cream flavor:\n 1. Vanilla\n 2. Chocolate\n 3. Strawberry\nYour choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Vanilla has been selected!\n");
    }
    else if (choice == 2) {
        printf("Chocolate is your pick!\n");
    }
    else if (choice == 3) {
        printf("Strawberry chosen successfully.\n");
    }
    else {
        printf("That option is not available.\n");
    }

    return 0;
}
