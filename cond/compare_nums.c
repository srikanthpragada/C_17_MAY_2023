// Display relationship between two numbers
// Date : 24-MAY-2023


#include <stdio.h>

void main()
{
 int a, b;

     printf("Enter two numbers :");
     scanf("%d%d", &a, &b);

     // multiple if statement
     if(a > b)
        printf("a > b");
     else
        if (b > a)
           printf("b > a");
        else
           printf("a == b");
}


