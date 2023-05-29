// Take a number and print sum of digits
// Date : 29-MAY-2023

#include <stdio.h>

void main()
{
 int num, digit, total = 0;

     printf("Enter number :");
     scanf("%d", &num);

     while (num > 0)
     {
          digit = num % 10;  // take rightmost digit
          total += digit;
          num = num / 10;    // remove rightmost digit
     }

     printf("Total = %d", total);

}
