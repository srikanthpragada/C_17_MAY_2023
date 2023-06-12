// Function declaration vs. definition
// Date : 12-JUN-2023

#include <stdio.h>

// Function declaration or Prototype declaration
float avg(int, int);

void main()
{
 float a;

     a = avg(10, 15);
     printf("%f", a);
}

// Function definition
float avg(int n1, int n2)
{
   return (n1 + n2) / 2.0;
}

