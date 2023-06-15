// Create and use structure in functions
// Date : 15-JUN-2023

#include <stdio.h>

struct product
{
    char name[20];
    int price, qty;
};

void print(struct product p)
{
    printf("%-20s %6d %3d\n", p.name, p.price, p.qty);
}

struct product max(struct product p1, struct product p2)
{
    if(p1.price > p2.price)
        return p1;
    else
        return p2;
}

void main()
{
 struct product p1;
 struct product p2 = {"Harddisk",5000,10};
 struct product big;
 struct product products[] =
          {
              {"P1",1000,10}, {"P2",2000,5}, {"P3",500,20}
          };



      strcpy(p1.name, "Logitech Mouse");
      p1.price = 10000;
      p1.qty = 5;

      print(p1);
      print(p2);

      big = max(p1, p2);
      print(big);

      for(i = 0; i < 3; i ++)
        print(products[i]);

}

