#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum = 0;  //sum = 0 ÚÔÇä ÇáãÍÇíÏ ÇáÌãÚí
    printf("Enter your number : ");
    scanf("%d",&n);

    for ( int i = 1 ; i <= n ; i++)
    {
        sum += i;
    }
    printf("Your sum for 1 to %d is : %d",n,sum);
    return 6;
}
