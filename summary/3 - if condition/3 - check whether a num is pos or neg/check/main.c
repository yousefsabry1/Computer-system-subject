#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the num : ");
    scanf("%d",&a);

    if ( a > 0)
    {
        printf("Your num is positive");
    }
    else if ( a < 0)
    {
        printf("Your num is negative");
    }
    else
    {
        printf("Your num is zero");
    }
    return 6;
}
