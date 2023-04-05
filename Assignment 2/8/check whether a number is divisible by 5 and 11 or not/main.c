#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a;
    printf("Enter your number : ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("Your number %d is divisible by 5 and 11 \n",a);
    }
    else
    {
        printf("Your number %d isn’t divisible by 5 and 11 \n",a);
    }

printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");


    return 1;
}
