#include <stdio.h>
#include <stdlib.h>

int main()
{

    int f;
    printf("Enter your number : ");
    scanf("%d",&f);


    printf("factors of %d are :\n",f);

     for (int i = 1;i <= f;i++)
     {
         if (f % i == 0)
         {
             printf("%d ",i);
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
