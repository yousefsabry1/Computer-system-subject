#include <stdio.h>
#include <stdlib.h>

int main()
{



    for (int i=1 ; i<=5; i++)
    {
        for (int k =1;k <= 5 - i ;k++)
        {
            printf(" ");
        }
        for (int j =1;j<= 5;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 6;
}
