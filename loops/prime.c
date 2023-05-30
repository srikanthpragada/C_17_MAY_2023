// Take a number and display whether it is prime
// Date : 30-MAY-2023

#include <stdio.h>

void main()
{
 int num,i;

     printf("Enter number :");
     scanf("%d", &num);

     for(i = 2; i <= num/2 ; i ++)
     {
         if(num % i == 0)
         {
             printf("Not a prime number because %d is a factor!", i);
             break;
         }
     }

     if (i > num/2)
         printf("Prime Number!");

}
