#include <stdio.h>
#include <stdlib.h>

int main()
{


    int s1 , s2 , s3;
    printf("Enter first side : ");
    scanf("%d", &s1);
    printf("Enter second side : ");
    scanf("%d", &s2);
    printf("Enter third side : ");
    scanf("%d", &s3);

    if ( s1 + s2 > s3 || s2 + s3 > s1 || s1 + s3 > s2)
    {
        printf("The triangle is valid .\n");
    }
    else
    {
        printf("The triangle isn’t valid .\n");
    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");
    return 7;
}
