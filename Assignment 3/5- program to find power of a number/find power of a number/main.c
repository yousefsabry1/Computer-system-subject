#include <stdio.h>
#include <stdlib.h>

int main()
{

    int power,base,product = 1,i;
    printf("Enter your base : ");
    scanf("%d",&base);
    printf("Enter your power : ");
    scanf("%d",&power);


    for ( i=1;i <= power;i++)
    {
        product = product * base;
    }
    printf("%d ^ %d = %d\n",base,power,product);




  printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 6;
}
