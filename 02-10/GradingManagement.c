#include<stdio.h>
int main()
{
    float  Physics, Chemistry, Biology, Mathematics, Computer;
    float percentage;
    printf("Enter marks of Physics: \n");
    scanf("%f",&Physics);
    printf("Enter marks of Chemistry: \n");
    scanf("%f",&Chemistry);
    printf("Enter marks of Biology: \n");
    scanf("%f",&Biology);
    printf("Enter marks of Mathematics: \n");
    scanf("%f",&Mathematics);
    printf("Enter marks of Computer: \n");
    scanf("%f",&Computer);

    float total=Physics+Chemistry+Biology+Mathematics+Computer;
    printf("Total Marks: %.2f/500\n",total);

    percentage=(total/500)*100;
    printf("Percentage: %.2f%%\n",percentage);

    if(percentage >= 90) {
        printf("Grade: A\n");
    }
    else if(percentage >= 80){
        printf("Grade: B\n");
    }
    else if(percentage >= 70){
        printf("Grade:C\n");
    }
    else if(percentage >= 60){
        printf("Grade: D\n");
    }
    else if(percentage >= 40){
        printf("Grade: E\n");
    }
    else{
        printf("Grade: F\n");
    }

}