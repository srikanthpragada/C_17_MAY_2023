// Create a function to return true if the given char is found in the given string

#include <stdio.h>


int contains_char(char st[20], char ch)
{
 int i;

    for(i = 0; st[i] != '\0'; i ++)
    {
        if(st[i] == ch)
            return 1;  // true as char is found
    }

    return 0;  // false
}

void main()
{
   printf("Result =  %d", contains_char("Hello",'l'));
}
