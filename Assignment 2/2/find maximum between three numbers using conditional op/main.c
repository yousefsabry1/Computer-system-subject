#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a , b , c;

    printf("Enter your first number : ");
    scanf("%d", &a);
    printf("Enter your second number : ");
    scanf("%d", &b);
    printf("Enter your third number : ");
    scanf("%d", &c);


    if (a > b && a > c)
    {
        printf("%d is the maximum of %d and %d \n",a,b,c);
    }
    else if (b > c)
    {
       printf("%d is maximum of %d and %d \n",b,a,c);
    }
    else
    {
       printf("%d is maximum of %d and %d \n",c,a,b);
    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

     return 1;


}
