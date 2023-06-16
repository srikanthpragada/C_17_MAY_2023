// Count no. of uppercase letters in names.txt
// Date : 16-JUN-2023

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50];
  char ch;
  int count = 0;

    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");
    if(fp == NULL) // file not opened
    {
        printf("Sorry! File cannot be opened!");
        exit(1);  // terminate with error
    }

    while(1)
    {
        ch = fgetc(fp);
        if (ch == EOF)  // end of file
            break;

        if (islower(ch))
            count ++;
    }

    printf("Lowercase count = %d", count);

    fclose(fp);
}

