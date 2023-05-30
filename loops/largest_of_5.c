// Take a number and display whether it is prime
// Date : 30-MAY-2023

#include <stdio.h>

void main()
{
 int num,i, largest = 0;

     for(i = 1; i <= 5 ; i ++)
     {
         printf("Enter number :");
         scanf("%d", &num);

         if(num > largest)
             largest = num;
     }

     printf("Largest = %d", largest);
}
