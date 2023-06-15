// Create and use structure
// Date : 14-JUN-2023

#include <stdio.h>

struct product
{
    // members
    char name[20];
    int price, qty;
};



void main()
{
 struct product p1;
 struct product p2 = {"Harddisk",5000,10};

      strcpy(p1.name, "Logitech Mouse");
      p1.price = 10000;
      p1.qty = 5;



      printf("%s %d %d\n", p1.name, p1.price, p1.qty);
      printf("%s %d %d\n", p2.name, p2.price, p2.qty);


}

