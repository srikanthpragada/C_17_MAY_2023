// Take 5 names and display the largest name by length
// Date : 08-JUN-2023

void main()
{
 char name[20];
 char largest[20];
 int i;

     // set largest to empty string
     strcpy(largest,"");  // largest[0] = '\0';

     for(i = 0; i < 5; i ++)
     {
       printf("Enter name :");
       gets(name);

       if (strlen(name) > strlen(largest))
           strcpy(largest, name);

     }

     printf("Largest name = %s", largest);

}
