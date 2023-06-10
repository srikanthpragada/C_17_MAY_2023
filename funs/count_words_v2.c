// Create a function to return true if the given char is found in the given string

#include <stdio.h>


int count_words(char st[20])
{
 int i, count = 0, inword = 0;

    for(i = 0; st[i] != '\0'; i ++)
    {
        if(isalnum(st[i]))
        {
            if(!inword)  // first char in word
            {
                inword = 1;
                count ++;
            }
        }
        else
            inword = 0;
    }

    return count;
}

void main()
{
   printf("Result =  %d", count_words("  Hello    how,are you doing   "));
}
