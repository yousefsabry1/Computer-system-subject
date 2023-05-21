#include <stdio.h>
#include <stdlib.h>
#define MAX 1000   //maximum array size for user
int main()
{
    int n,i;
    int arr[MAX];  //declare the array
    // input array size
    printf("Enter The size of array : ");
    scanf("%d",&n);

    // input array elemnts
    printf("Enter %d elements of array : ",n);

    //scan elements of array
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }

    //print elements of array
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d ",arr[i]);
    }
    return 6;
}
