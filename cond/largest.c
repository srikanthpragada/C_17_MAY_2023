// Take 3 numbers and display the largest
// Date : 25-MAY-2023

#include <stdio.h>

void main()
{
  int a = 10, b = 10, c = 15;


       if(a > b && a > c)
          printf("%d", a);
       else
         if(b > c)
            printf("%d", b);
         else
            printf("%d", c);


}
