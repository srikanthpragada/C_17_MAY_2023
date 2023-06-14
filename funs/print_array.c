// Pass by reference to set two parameters to avg
// Date : 14-JUN-2023

#include <stdio.h>

void print_array(int a[], int len)
{
  int i;
     for(i = 0; i < len; i ++)
        printf("%d ", a[i]);
}

void main()
{
 int arr[] = {1,2,3,4,5};
 int marks[] = {10,22,33,44,11,22,33,55,44,22};

    //print_array(arr, 5);
    //print_array(marks, 10);
    print_array(marks, 5);
}

