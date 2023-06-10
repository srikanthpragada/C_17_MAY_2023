// Create a function to return true if the given char is found in the given string

#include <stdio.h>


int count_words(char st[20])
{
 int i, count = 0;

    for(i = 0; st[i] != '\0'; i ++)
    {
        if(st[i] == 32)
            count ++;
    }

    return count + 1;
}

void main()
{
   printf("Result =  %d", count_words("  Hello how are you doing   "));
}
