#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,max; //make 3 variables

    printf("Enter first number : "); //print to tell the user to enter first num
    scanf("%d",&a); //scan first num from user
    printf("Enter second number : "); //print to tell the user to enter second num
    scanf("%d",&b); //scan second num from user

    if (a > b) //condition for if
    {
        max = a;  // if a is larger than b then a is max
        printf("The max is : %d",max);
    }
    else if (a < b)
    {
        max = b; // if a is smaller than b then b is max
        printf("The max is : %d",max);
    }
    else
    {
        printf("%d is equal %d",a,b);   //if anything else so a = b
    }
    return 6;
}
