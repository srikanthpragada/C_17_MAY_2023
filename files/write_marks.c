// Write marks into marks.dat
// Date : 23-JUN-2023

#include <stdio.h>

struct student
{
     char name[30];
     int marks;
};

void main()
{
  FILE * fp;
  struct student s;


    fp = fopen("marks.dat", "wb");
    while(1)
    {
       fflush(stdin);  // clear buffer

       printf("Enter name [end to stop]:");
       gets(s.name);

       if(stricmp(s.name, "end") == 0)
          break;

       printf("Enter marks :");
       scanf("%d",&s.marks);

       fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);
}

