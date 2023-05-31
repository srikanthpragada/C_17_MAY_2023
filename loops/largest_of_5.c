// Take a number and display whether it is prime
// Date : 30-MAY-2023

#include <stdio.h>

void main()
{
 int num, i, smallest;

     for(i = 1; i <= 5 ; i ++)
     {
         printf("Enter number :");
         scanf("%d", &num);

         if(num < smallest)
             smallest = num;
     }

     printf("Smallest = %d", smallest);
}
