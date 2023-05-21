#include <stdio.h>
#include <stdlib.h>
int fact(int a);

int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);

    int res = fact(n);
    printf("Factorial of %d is : %d",n,res);

    return 6;
}


int fact(int a)
{
    if ( a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact( a - 1 );
    }
}
