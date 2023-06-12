// Recursion Demo
// Date : 12-JUN-2023

#include <stdio.h>

void reverse(int num)
{
  if(num > 0)
  {
    printf("%d ", num);
    reverse(num - 1);  // recursion
  }
}

void print_reverse(int num)
{

}

void main()
{
    reverse(5);
}

