// Create and use structure with array
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

void increase_price(struct product * p)
{
    p->price = p->price * 1.1;
}

void main()
{
  struct product p1 = {"P1", 10000, 5};

      increase_price(&p1);
      print(p1);

}

