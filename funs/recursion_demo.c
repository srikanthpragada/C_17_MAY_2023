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

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

void print_reverse(int num)
{

}

void main()
{
    //reverse(5);
    printf(" %d  ", factorial(5));


}

