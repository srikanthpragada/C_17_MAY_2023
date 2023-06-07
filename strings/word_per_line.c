// Take a string and print word per line
// Date : 07-JUN-2023

void main()
{
 char st[50]; // string
 int i;

     printf("Enter a string :");
     gets(st);

     for(i = 0; st[i] != '\0' ; i ++)
     {
         if (st[i] == ' ')
            putch('\n');
         else
            putch(st[i]);
     }
}
