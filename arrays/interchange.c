// Take an array of 20 int and fill it with random numbers and interchange
// first 10 with last 10
// Date : 05-JUN-2023

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
 int a [20], i, j, temp;

     srand(time(0));

     for(i = 0; i < 20; i ++)
     {
        a[i] = rand() % 100;
        printf("%5d", a[i]);
     }

     // interchange
     for(i = 0, j = 19; i < j ; i ++, j --)
     {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
     }

      printf("\nAfter Interchange\n");

     for(i = 0; i < 20; i ++)
     {
        printf("%5d", a[i]);
     }

}
