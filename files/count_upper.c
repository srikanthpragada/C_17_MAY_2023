// Count no. of uppercase letters in names.txt
// Date : 16-JUN-2023

#include <stdio.h>

void main()
{
  FILE * fp;
  char ch;
  int count = 0;

    fp = fopen("names.txt", "rt");
    while(1)
    {
        ch = fgetc(fp);
        if (ch == EOF)  // end of file
            break;

        if (isupper(ch))
            count ++;
    }

    printf("Uppercase count = %d", count);

    fclose(fp);
}

