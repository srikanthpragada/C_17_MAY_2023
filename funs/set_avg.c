// Pass by reference to set two parameters to avg
// Date : 14-JUN-2023

#include <stdio.h>

void set_avg(int * a, int * b)
{
   int avg;

      avg = (*a + *b) / 2;
      *a = avg;
      *b = avg;
}

void main()
{
 int n1 = 10, n2 = 20;

    set_avg(&n1,&n2);
    printf(" %d %d ", n1, n2);
}

