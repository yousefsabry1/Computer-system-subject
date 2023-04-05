#include <stdio.h>
#include <math.h>

int main()
{

    double a , b , c , delta , r1 , r2 , realpart , imgpart;
    printf("Enter first number : ");
    scanf("%lf", &a);
    printf("Enter second number : ");
    scanf("%lf", &b);
    printf("Enter third number : ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if ( delta > 0 )
    {
        r1 = ( -b +sqrt(delta))/(2*a);
        r2 = ( -b -sqrt(delta))/(2*a);
        printf("There are two real roots : \n");
        printf("Root 1 = %.2lf\n", r1);
        printf("Root 2 = %.2lf\n", r2);
    }
    else if ( delta == 0)
    {
        r1 = r2 = -b /(2*a);
        printf("There is one real root\n");
        printf("r1 = r2 = %.2lf\n", r1);
    }
    else
    {
        realpart = -b /(2*a);
        imgpart = sqrt(-delta)/ (2*a);
        printf("There are two complex roots : \n");
        printf("Root 1 = %.2lf + %.2lfi\n", realpart, imgpart);
        printf("Root 2 = %.2lf - %.2lfi\n", realpart, imgpart);
    }

      printf("\033[0;33m");
 printf("#The phoenix ):\n");
    printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 7;
}
