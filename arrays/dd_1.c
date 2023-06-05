// 5 X 5 array with random numbers
// Date : 05-JUN-2023

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
 int a [5][5], i, j;

     srand(time(0));
     for(i = 0; i < 5; i ++)
     {
        for(j = 0; j < 5; j ++)
        {
          a[i][j] = rand() % 100;
          printf("%5d", a[i][j]);
        } // inner loop

        printf("\n");
     } // outer loop
} // main()
