#include <stdio.h>

int main() {
    int button;

    list:
    printf("\nSelect an option:\n");
    printf("1. Turn ON the Light\n");
    printf("2. Turn OFF the Light\n");
    printf("3. Turn ON the AC\n");
    printf("4. Turn OFF the AC\n");
    printf("Enter your choice: ");
    scanf("%d", &button);

   
    switch (button) {
        case 1:
            printf("Light is now ON.\n");
            break;
        case 2:
            printf("Light is now OFF.\n");
            break;
        case 3:
            printf("AC is now ON.\n");
            break;
        case 4:
            printf("AC is now OFF.\n");
            break;
        default:
            printf("Invalid choice! Please enter 1, 2, 3, or 4.\n");
            goto list;  

    return 0;
   }
}