#include <stdio.h>
#include <stdlib.h>
void print (); // declaration and don.t forget ;

// whats the function ?
// we use it for do something in big projects
// we can make infinte number of functions
// at the first you should put the definition
// then put at the top after hashtags the declaration
// and the last thing call the function
// i will do small example to the function for print your name

int main()
{
    print();  //calling the function
    // ÇáŞæÓíä İÇÖííä æãÔ ÈäÍØ ÇáäæÚ ŞÈáåÇ ÚÔÇä İæíÏ İãÔ åÊÑÌÚ ÈÍÇÌå

    return 6;
}


void print()  //definiton
{
    char ch;
    printf("Enter your name : ");
    scanf("%c", &ch);
    printf("Your name is : %c",ch);
}
