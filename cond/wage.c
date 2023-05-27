// Take hours, weekday and display wage
// Date : 27-MAY-2023

#include <stdio.h>

void main()
{
  int hours, rate, weekday;

     printf("Enter weekday and hours :");
     scanf("%d%d", &weekday, &hours);

     switch(weekday)
     {
       case 1:
       case 2:
       case 3: rate = 100; break;
       case 4: rate = 125; break;
       case 5: rate = 150; break;
       default:rate = 200;
    } // switch

    printf("Wage = %d", hours * rate);
}
