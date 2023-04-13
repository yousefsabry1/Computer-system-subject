#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n,i,isprime=1;
    printf("Enter your number : ");
    scanf("%d",&n);

    if (n<=1)
    {
        isprime =0;
    }
    else
    {
       for (i=2;i <= n/2; i++)
       {
         if (n%i==0)
         {
             isprime = 0;
             break;
         }
       }
    }

    if (isprime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }


    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");


    return 6;
}
