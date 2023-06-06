// Take a string and replace digits with dots
// Date : 06-JUN-2023

void main()
{
 char st[50]; // string
 int i,count = 0;

     printf("Enter a string :");
     gets(st);

     for(i = 0; st[i] != '\0' ; i ++)
     {
          if (isdigit(st[i]))
                st[i] = '.';
     }

     puts(st);
}
