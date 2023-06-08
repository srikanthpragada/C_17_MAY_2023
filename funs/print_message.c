// Print message with lines
// Date : 08-JUN-2023

#include <stdio.h>

// user-defined function
void print_line()
{
 int i;

    for(i = 1; i <= 30; i ++)
      putch('-');
}

void main()
{

    print_line();  // call function

    printf("\nSrikanth Technologies\n");

    print_line();

}
