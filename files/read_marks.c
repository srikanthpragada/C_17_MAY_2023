// Read marks from marks.dat
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
  int count;


    fp = fopen("marks.dat", "rb");
    while(1)
    {
       count = fread(&s, sizeof(s), 1, fp);
       if (count == 0) // EOF
          break;

       printf("%-30s %3d\n", s.name, s.marks);
    }

    fclose(fp);
}

