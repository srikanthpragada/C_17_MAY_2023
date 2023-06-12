// Create a function to return GCD of two numbers
// Date : 12-JUN-2023

#include <stdio.h>


int gcd(int num1, int num2)
{
 int i, small, large ;

    small = num1 < num2 ? num1 : num2;
    large = num1 > num2 ? num1 : num2;

    if (large % small == 0)
        return small;

    for(i = small/2;  i > 0; i --)
    {
       if(num1 % i == 0 && num2 % i == 0)
           return i;
    }
}

void main()
{
     printf("%d \n", gcd(10,15));
     printf("%d \n", gcd(10,20));
     printf("%d \n", gcd(11,20));
     printf("%d \n", gcd(15,33));
}
