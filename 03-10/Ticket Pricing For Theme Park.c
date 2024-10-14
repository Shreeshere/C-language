#include <stdio.h>

int main() {
    int age;
    float height;
    char vip_pass;
    float float price, final_price, Pay_extra;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height (in cm): ");
    scanf("%f", &height);
    printf("VIP pass (y/n): ");
    scanf(" %c", &vip_pass);

    if (age <= 3) {
        price = 0;  
    } else if (age >= 4 && age <= 12) {
       price = 20;
    } else if (age >= 13 && age <= 64) {
        price = 100;
    } else if (age >= 65) {
        price = 50;
    }

    if (height > 180) {
        Pay_extra = 50;  
    }else if(height > 120 && height < 180){
        price=price;
    } 
    else if (height < 120) {
        final_price = price*0.5;

    if (vip_pass == 'y' || vip_pass == 'Y') {
        final_price =final_price*0.1;
    }

    printf("\nCustomer Details:\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f cm\n", height);
    printf("VIP Pass: %c\n", vip_pass);
    
    printf("\nPrice Breakdown:\n");
    printf("Ticket Price: Rs. %.2f\n", price);
    printf("Additional Charges: Rs. %.2f\n", Pay_extra);
    printf("Final Ticket Price: Rs. %.2f\n", final_price);

    return 0;
}
}