#include <stdio.h>
#include <stdlib.h>
int max (int a , int b);

int main()
{
    int x,y;
    printf("Enter first num : ");
    scanf("%d",&x);
    printf("Enter second num : ");
    scanf("%d",&y);

  int c = max (x,y);    //áÇÒã ÊÍØ ãÊÛíÑ ÚÔÇä ÊÎÒä Ýíå ÇáÞíãå Çáí ÑÇÌÚå ãä ÇáÝäßÔä
    printf("Max is : %d",c);
    return 6;
}


int max (int a , int b)
{
    int z;

    if (a>b)
    {
        z = a;
    }
    else
    {
        z = b;
    }
    return z;
}

