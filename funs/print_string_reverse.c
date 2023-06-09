// Create a function to print an array in reverse order
// Date : 09-JUN-2023

#include <stdio.h>


void print_reverse(char st[20])
{
 int i;

    for(i = strlen(st)-1; i >= 0; i --)
    {
       putch(st[i]);
    }
}

void main()
{
      print_reverse("Hello");
}
