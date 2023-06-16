// Display lines with length more than 10
// Date : 16-JUN-2023

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[100];
  char *p;

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
       p = fgets(line, 100, fp);
       if(p == NULL) // EOF
          break;

       if(strlen(line) > 10)
          printf("%s", line);
    }
    fclose(fp);
}

