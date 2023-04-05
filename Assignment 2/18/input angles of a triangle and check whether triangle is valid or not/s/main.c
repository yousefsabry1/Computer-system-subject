#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a1 , a2 , a3;
    printf("Enter first angle : ");
    scanf("%d", &a1);
    printf("Enter second angle : ");
    scanf("%d", &a2);
    printf("Enter third angle : ");
    scanf("%d", &a3);

    if ( a1 + a2 + a3 == 180)
    {
        printf("%d + %d + %d = 180 , So the triangle is valid .\n",a1 , a2 , a3);
    }
    else
    {
        printf("%d + %d + %d != 180 , So the triangle isn’t valid .\n",a1 , a2 , a3);
    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");
    return 7;
}
