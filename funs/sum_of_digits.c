// Create a function to return sum of digits
// Date : 09-JUN-2023

#include <stdio.h>


int sum_of_digits(int num)
{
  int total = 0;

    while(num > 0)
    {
        total +=  num % 10;
        num /= 10;
    }

    return total;
}

void main()
{
   printf("Total = %d", sum_of_digits(1234));
}
