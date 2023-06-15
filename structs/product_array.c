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

void main()
{
 struct product products[] =
          {
              {"P1",1000,10}, {"P2",2000,5}, {"P3",500,20}
          };
 int i;

      for(i = 0; i < 3; i ++)
      {
        //print(products[i]);
        printf("%s\n", products[i].name);
      }


}

