// Search in 5 X % array
// Date : 05-JUN-2023

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
 int a [5][5], sn, i, j, found = 0;

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

     printf("Enter search number : ");
     scanf("%d", &sn);

     for(i = 0; i < 5 && !found;  i ++)
     {
        for(j = 0; j < 5; j ++)
        {
            if(a[i][j] == sn)
            {
                printf("\nFound at %d, %d \n", i, j);
                found = 1;
                break;
            }
        } // inner loop

     } // outer loop

} // main()
