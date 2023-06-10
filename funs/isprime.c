// Create a function to return true if the given number is prime
#include <stdio.h>

int isprime(int num)
{
 int i;

    for(i = 2; i <= num/2; i ++)
    {
        if(num % i == 0)
           return 0;
    }

    return 1;
}

void main()
{
   printf("Prime =  %d", isprime(1300));
}
