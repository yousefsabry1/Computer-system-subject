#include <stdio.h>
#include <stdlib.h>
void swap();  //function declaration

int x , y;  //«·„ €Ì—«  »—« «·œÊ«· ﬂ·Â« ⁄‘«‰ ﬂ· «·œÊ«·  ﬂÊ‰ ‘«Ì›«Â„ Ê ‘ €· ⁄·ÌÂ„

int main()
{

    printf("Enter first value : ");
    scanf("%d",&x);
    printf("Enter second value : ");
    scanf("%d",&y);

    printf("values before swap is : %d \t %d\n",x,y);

    swap();   //function calling

    printf("values after swap is : %d \t %d\n",x,y);

    return 6;
}

void swap()
{
    int z = x;
    x = y;            //function definiton
    y = z;
}
