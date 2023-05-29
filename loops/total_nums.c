// Take 10 nums or until 0 is given
// Date : 29-MAY-2023

#include <stdio.h>

void main()
{
 int num,i, total = 0;

     for(i = 1; i <= 10 ; i ++)
     {
        printf("Enter number :");
        scanf("%d", &num);

        if (num == 0)
            break;  // terminate loop

        total += num;
     }

     printf("Total = %d", total);
}
