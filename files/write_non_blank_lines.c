// Write non-blank lines to target file
// Date : 23-JUN-2023

#include <stdio.h>

void main()
{
  FILE * sfp, * tfp;
  char sf[50], tf[50];
  char line[100], * p;

    strcpy(sf, "names2.txt");
    strcpy(tf, "new_names.txt");

    sfp = fopen(sf, "rt");
    if(sfp == NULL) // file not opened
    {
        printf("Sorry! %s cannot be opened!", sf);
        exit(1);  // terminate with error
    }

    tfp = fopen(tf, "wt");
    if(tfp == NULL) // file not opened
    {
        printf("Sorry! %s cannot be opened!", tf);
        exit(1);  // terminate with error
    }

    while(1)
    {
        p = fgets(line, 100, sfp);
        if(p == NULL)  // EOF
            break;

        if(strlen(line) > 1)  // non-blank line
            fprintf(tfp, "%s", line);
    }

    fclose(tfp);
    fclose(sfp);
}

