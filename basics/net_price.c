// Calculate net price with 10% discount
// Date : 20-MAY-2023

#include <stdio.h>

main()
{
  int price, netprice;

    // input
    printf("Enter price :");
    scanf("%d", &price);

    // process
    netprice = price * 0.90;

    // output
    printf("Net price =  %d", netprice);

}
