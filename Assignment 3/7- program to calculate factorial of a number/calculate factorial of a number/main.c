#include <stdio.h>
#include <stdlib.h>

int main()
{

 int num,fact=1;
 printf("Enter your number : ");
 scanf("%d",&num);

 for (int i = 1;i<=num;i++)
 {
     fact*=i;
 }
 printf("fact of %d is = %d\n",num,fact);


printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");



    return 6;
}
