// Take 5 names and display the largest name
// Date : 07-JUN-2023

void main()
{
 char names[5][20];
 char largest[20];
 int i;

     // set largest to empty string
     strcpy(largest,"");  // largest[0] = '\0';

     for(i = 0; i < 5; i ++)
     {
       printf("Enter name :");
       gets(names[i]);

       if (strcmp(names[i], largest) > 0)
           strcpy(largest, names[i]);

     }

     printf("Largest name = %s", largest);

}
