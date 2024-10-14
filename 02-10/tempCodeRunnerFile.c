#include <stdio.h>

int main() {
    int vehicleType, vehicleAge, option, numTyres;
    char ownerName[50], vehicleName[50];
    float bill;
    printf("Enter the type of vehicle (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): ");
    scanf("%d", &vehicleType);
    if (vehicleType == 2 || vehicleType == 3 || vehicleType == 4) {
        printf("Enter the age of the vehicle in months: ");
        scanf("%d", &vehicleAge);

        if (vehicleAge > 8) {
            printf("Options:\n");
            printf("1) Enter 1 for tyre problem\n");
            printf("2) Enter 2 for fuel problem\n");
            printf("3) Enter 3 for engine issue\n");
            printf("4) Enter 4 for general services\n");
            printf("Enter your choice: ");
            scanf("%d", &option);

            printf("Enter the owner's name: ");
            scanf("%s", ownerName);
            printf("Enter the vehicle name: ");
            scanf("%s", vehicleName);

            if (option == 1) { 
                printf("How many tyres you are facing the issue? ");
                scanf("%d", &numTyres);
                bill = numTyres * 400;
                printf("\nName of the owner: %s\n", ownerName);
                printf("Name of the vehicle: %s\n", vehicleName);
                printf("Issue: Tyre problem\n");
                printf("Bill: Rs. %.2f\n", bill);
            } else if (option == 2) { 
                bill = 1500;
                printf("\nName of the owner: %s\n", ownerName);
                printf("Name of the vehicle: %s\n", vehicleName);
                printf("Issue: Fuel problem\n");
                printf("Bill: Rs. %.2f\n", bill);
            } else if (option == 3) {
                bill = 5000;
                printf("\nName of the owner: %s\n", ownerName);
                printf("Name of the vehicle: %s\n", vehicleName);
                printf("Issue: Engine issue\n");
                printf("Bill: Rs. %.2f\n", bill);
            } else if (option == 4) { 
                bill = 1000;
                printf("\nName of the owner: %s\n", ownerName);
                printf("Name of the vehicle: %s\n", vehicleName);
                printf("Issue: General services\n");
                printf("Bill: Rs. %.2f\n", bill);
            } else {
                printf("Invalid option selected.\n");
            }
        } else {
            printf("Your vehicle service will be done after a while.\n");
        }
    } else {
        printf("This service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler.\n");
    }

    return 0;
}
