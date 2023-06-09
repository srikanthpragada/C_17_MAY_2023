// Create a function to return true if number is even
// Date : 09-JUN-2023

#include <stdio.h>

int square(int num)
{
    return num * num;
}

int iseven(int num)
{
   return num % 2 == 0;
}

int area(int r)
{
  return  r * r * 3.14;
}

void main()
{
 int result;

     result = iseven(11);
     printf("%d ", result);
     printf("%d ", square(10));
     printf("%d ", area(15));


}
