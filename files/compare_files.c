// Compare two files and display whether they are same or where they differ
// Date : 23-JUN-2023

#include <stdio.h>

void main()
{
  FILE * fp1, * fp2;
  char fn1[50], fn2[50];
  int lineno = 1, colno = 1;
  char ch1, ch2;

    strcpy(fn1, "names.txt");
    strcpy(fn2, "names2.txt");

    fp1 = fopen(fn1, "rt");
    if(fp1 == NULL) // file not opened
    {
        printf("Sorry! %s cannot be opened!", fn1);
        exit(1);  // terminate with error
    }

    fp2 = fopen(fn2, "rt");
    if(fp2 == NULL) // file not opened
    {
        printf("Sorry! %s cannot be opened!", fn2);
        exit(1);  // terminate with error
    }

    while(1)
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if (ch1 != ch2)  // end of file
        {
           printf("Differ at %d line, %d column", lineno, colno);
           break;
        }

        if(ch1 == EOF && ch2 == EOF)
        {
            printf("Both are same!");
            break;
        }

        if(ch1 == '\n')
        {
            lineno ++;
            colno = 1;
        }
        else
            colno ++;

    }

    fclose(fp1);
    fclose(fp2);
}

