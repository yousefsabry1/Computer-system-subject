#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length , width , area;
    printf("Enter your length : ");
    scanf("%d",&length);
    printf("Enter your width : ");
    scanf("%d",&width);

    area = length * width;

    printf("The area is : %d * %d = %d",length,width,area);
    return 6;
}
