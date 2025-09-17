#include <stdio.h>

int main() {
    int scoops;
    printf("Enter the number of scoops you would like: ");
    scanf("%d", &scoops);

    if (scoops > 1) {
        printf("Check out our deals for multiple scoops!\n");
    } 
    else if (scoops == 1) {
        printf("The price comes to $2.00\n");
    } 
    else {
        printf("That’s not a valid scoop amount.\n");
    }

    return 0;
}
