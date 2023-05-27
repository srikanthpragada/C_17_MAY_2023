// Print table for the given number
// Date : 27-MAY-2023

#include <stdio.h>

void main()
{
 int num, i;

     printf("Enter number :");
     scanf("%d", &num);

     i = 1;
     while (i <= 20)
     {
         printf("%3d * %2d = %5d\n", num, i, num * i);
         i ++;
     }

}
