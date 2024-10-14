#include <stdio.h>

int main() {
    int N1, N2;

    printf("Enter two integers (N1 and N2): ");
    scanf("%d %d", &N1, &N2);

    if (N1 >= N2) {
        int i = N1;
        while (i >= N2) {
            printf("%d", i);
            if (i > N2) {
                printf(","); 
            }
            i--;
        }
    } else {
        printf("N1 should be greater than or equal to N2.");
    }

    printf("\n");
    return 0;
}
