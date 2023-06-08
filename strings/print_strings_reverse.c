// Take 5 names and display them in reverse order
// Date : 08-JUN-2023

void main()
{
 char names[5][20];
 int i;

     for(i = 0; i < 5; i ++)
     {
       printf("Enter name :");
       gets(names[i]);
     }

     for(i = 0; i < 5; i ++)
     {
        puts(strrev(names[i]));
     }

}
