#include <stdio.h>
#include <stdlib.h>

//program to do all arithmitic operations

int main()
{
    //put the variables
    int num1,num2;

    //take the data
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);

    //make the operations
    printf("sum for %d + %d is : %d\n",num1,num2,num1+num2);
    printf("sub for %d - %d is : %d\n",num1,num2,num1-num2);
    printf("multi for %d x %d is : %d\n",num1,num2,num1*num2);

    //make if condition when divide by zero
    if (num2 == 0)
    {
        printf("Error , can not divide by zero !");
    }
    else
    {
        printf("div for %d / %d is : %0.2lf\n",num1,num2,(float) num1/num2);  //don’t forget the casting for print any num when divide
    }

    return 6;
}
