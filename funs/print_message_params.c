// Print message with lines
// Date : 08-JUN-2023

#include <stdio.h>

// user-defined function
void print_line(int len, char ch)
{
 int i;

    for(i = 1; i <= len; i ++)
      putch(ch);
}

void main()
{

    print_line(20, '*');  // call function

    printf("\nSrikanth Technologies\n");

    print_line(30, '=');

}
