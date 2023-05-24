// Take price and display net price
// Date : 24-MAY-2023


#include <stdio.h>

void main()
{
  int price, discount, netprice;

     printf("Enter price :");
     scanf("%d", &price);

     if(price >= 5000)
     {
        discount = 20 / 100 * price;
     }
     else
     {
        discount = price * 10 / 100;
     }

     netprice = price - discount;
     printf("Net price : %d", netprice);

}


