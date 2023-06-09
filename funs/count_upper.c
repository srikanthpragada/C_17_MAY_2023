// Create a function to return number of uppercase letters
// Date : 09-JUN-2023

#include <stdio.h>


int count_upper(char st[20])
{
 int i, count = 0;

    for(i = 0; st[i] != '\0'; i ++)
    {
        if (isupper(st[i]))
             count ++;
    }

    return count;
}

void main()
{
   printf("Count = %d", count_upper("Work HARD Now"));
}
