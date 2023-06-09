// Create a function to print an array in reverse order
// Date : 09-JUN-2023

#include <stdio.h>


void print_reverse(int a[5])
{
 int i;

    for(i = 4; i >= 0; i --)
    {
       printf("%d ", a[i]);
    }
}

void main()
{
   int arr[] = {10,20,30,40,50};

      print_reverse(arr);

}
