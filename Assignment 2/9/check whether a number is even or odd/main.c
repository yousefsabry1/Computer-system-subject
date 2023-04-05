#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a ;
   printf("Enter your number :");
   scanf("%d",&a);

   if (a % 2 == 0 && a == 0 )
   {
       printf("number %d isn’t even nor odd  \n" , a);
   }
   else if (a % 2 == 0 )
   {
       printf("number %d is even \n" , a);
   }
   else
   {
       printf("number %d is odd \n" , a);
   }

   printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");
    return 1;
}
