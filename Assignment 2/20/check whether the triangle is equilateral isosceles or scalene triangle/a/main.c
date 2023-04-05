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

    if (s1 == s2 && s2 == s3)
    {
        printf("The triangle is an equilateral triangle.\n");
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("The triangle is an isosceles triangle.\n");
    }
    else
    {
        printf("The triangle is a scalene triangle.\n");
    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");
    return 7;
}
