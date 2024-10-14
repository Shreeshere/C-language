#include<stdio.h>
int main()
{
    char name[10],gender;
    int age;
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Age: ");
    scanf("%d",&age);
    printf("Gender: ");
    scanf("%c",&gender);
    printf("Gender( M (male), F (female)): ");
    scanf("%s",&gender);
    if(age>=21 && (gender == 'M' || gender == 'm')|| (age>=18 && (gender == 'F' || gender == 'f'))){
        printf("Eligible for marriage.\n");
    }
    else if(!(gender == 'M' || gender == 'm')&&(gender == 'F' || gender == 'f')){
        printf(" Not Eligible for marriage.\n");}
    else{
        printf("Invalid entry.\n");
    }
    return 0;
}