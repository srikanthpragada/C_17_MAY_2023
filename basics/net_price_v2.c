// Calculate net price with 10% discount
// Date : 22-MAY-2023

#include <stdio.h>

main()
{
  int price, discount, netprice;

    // input
    printf("Enter price :");
    scanf("%d", &price);

    // process
    discount = price * 10 / 100;
    netprice = price - discount;

    // output
    printf("Price      %6d\n", price);
    printf("Discount   %6d\n", discount);
    printf("Net Price  %6d\n", netprice);

}
