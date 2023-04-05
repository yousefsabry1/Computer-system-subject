#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0;
    float length , width;

    printf("For area enter 1\n");
    printf("For perimeter enter 2\n");
    printf("enter here : ");
    scanf("%d", &i);
    printf("The length is : ");
    scanf("%f", &length);
    printf("The width is : ");
    scanf("%f", &width);

    if (i==1)
    {
        printf("The area is %f * %f : %f \n",length,width , (length*width));

    }
     else
    {
        printf("The perimeter is 2 * %f + %f : %f\n",length,width , 2*(length+width));

    }

    printf("\033[0;33m");
 printf("#The phoenix ):\n");
 printf("\033[0;37m");


 printf("Please enter any key to exit .");
 system("pause > null");

    return 0;
}
