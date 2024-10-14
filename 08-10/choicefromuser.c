#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Print small letters from a to z\n");
    printf("2. Print small letters from z to a\n");
    printf("3. Print capital letters from A to Z\n");
    printf("4. Print capital letters from Z to A\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            char letter = 'a';
            while (letter <= 'z') {
                printf("%c ", letter);
                letter++;
            }
            break;
        }
        case 2: {
            char letter = 'z';
            while (letter >= 'a') {
                printf("%c ", letter);
                letter--;
            }
            break;
        }
        case 3: {
            char letter = 'A';
            while (letter <= 'Z') {
                printf("%c ", letter);
                letter++;
            }
            break;
        }
        case 4: {
            char letter = 'Z';
            while (letter >= 'A') {
                printf("%c ", letter);
                letter--;
            }
            break;
        }
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    printf("\n");
    return 0;
}
