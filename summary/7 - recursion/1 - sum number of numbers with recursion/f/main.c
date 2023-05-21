#include <stdio.h>
#include <stdlib.h>
int sum (int a);

int main()
{

    int n;
    printf("Enter your num : ");
    scanf("%d",&n);

    int res = sum (n);
    printf("Your sum is : %d",res);
    return 6;
}

int sum (int a)
{
    if ( a != 0)
        return a + sum(a - 1); // function repeat itself
    else
        return a;

}
