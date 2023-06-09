// Create a function to print factors
// Date : 09-JUN-2023

#include <stdio.h>


void factors(int num)
{
 int i;

    for(i = 2; i <= num/2; i ++)
    {
       if(num % i == 0)
         printf("%d ", i);
    }
}

void main()
{

    factors(255);
    // factors(50);

}
