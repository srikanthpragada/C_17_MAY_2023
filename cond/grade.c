// Take marks in 2 subjects and display grade
// Date : 26-MAY-2023

#include <stdio.h>

void main()
{
  int m1, m2;

     printf("Enter marks in 2 sujects:");
     scanf("%d%d", &m1,&m2);

     if(m1 > 60)
        if(m2 > 60)
           printf("A");
        else
           printf("B");
     else
        if(m2 > 60)
           printf("C");
        else
           printf("D");
}
