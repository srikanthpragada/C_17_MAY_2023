// Pass by value
// Date : 13-JUN-2023

#include <stdio.h>

void zero(int n)
{
   n = 0;
}

void main()
{
 int v = 100;

    zero(v);
    printf(" %d  ", v);
}

