#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,j,isprime;
    printf("Enter your number : ");
    scanf("%d",&n);

    printf("All prime numbers between 1 and %d are : ", n);




    for (i = 2; i <= n; i++) {
        isprime = 1;

        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }

        if (isprime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");



    return 6;
}
