// Take an array of 20 int and fill it with random numbers and display
// elements that are above avg
// Date : 05-JUN-2023

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
 int a [20], i, total = 0, avg;

     srand(time(0));

     for(i = 0; i < 20; i ++)
     {
        a[i] = rand() % 100;
        printf("%5d", a[i]);
        total += a[i];
     }

     avg = total / 20;

     printf("\nElements above avg : \n");

     for(i = 0; i < 20; i ++)
     {
        if(a[i] > avg)
           printf("%5d", a[i]);
     }

}
