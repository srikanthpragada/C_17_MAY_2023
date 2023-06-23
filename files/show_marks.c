// Take rollno and display name and marks from marks.dat
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
  int count, pos, rollno;


    fp = fopen("marks.dat", "rb");
    while(1)
    {
       printf("Enter rollno [0 to stop] : ");
       scanf("%d", &rollno);
       if(rollno == 0)
         break;

       pos = (rollno  - 1) * sizeof(s);
       fseek(fp, pos, SEEK_SET); // random access

       count = fread(&s, sizeof(s), 1, fp);
       if(count == 0)
          printf("Sorry! Rollno not found!\n");
       else
          printf("%-30s %3d\n", s.name, s.marks);
    }

    fclose(fp);
}

