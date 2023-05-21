#include <stdio.h>
#include <stdlib.h>
int pow ( int base , int power );
int main()
{

    int base , power;
    printf("Enter your base : ");
    scanf("%d",&base);
    printf("Enter your power : ");
    scanf("%d",&power);

    int res = pow ( base , power);
    printf("%d ^ %d is %d",base,power,res);

    return 6;
}

int pow ( int base , int power )
{
    if ( power == 0 )
        return 1;
    else
    return base * pow ( base , power - 1);

}
