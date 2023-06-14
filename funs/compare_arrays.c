// Compare two arrays and return true or false
// Date : 12-JUN-2023

#include <stdio.h>

int compare(int a[5], int b[5])
{

 int i;

    for(i = 0; i < 5; i ++)
    {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}

void main()
{
   int a1 [] = {1,2,3,4,5};
   int a2 [] = {1,2,3,4,7};

     printf("%d ", compare(a1,a2));
}


