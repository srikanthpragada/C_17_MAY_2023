// Display lines along with line number
// Date : 24-JUN-2023

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[100];
  char *p;
  int lineno;


    fp = fopen(argv[1], "rt");
    if(fp == NULL) // file not opened
    {
        printf("Sorry! File %s cannot be opened!", argv[1]);
        exit(1);  // terminate with error
    }
    lineno = 1;

    while(1)
    {
       p = fgets(line, 100, fp);
       if(p == NULL) // EOF
          break;

       printf("%03d: %s", lineno, line);
       lineno ++;
    }
    fclose(fp);
}

