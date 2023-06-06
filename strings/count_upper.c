// Take a string and count no. of uppercase chars
// Date : 06-JUN-2023

void main()
{
 char st[50]; // string
 int i,count = 0;

     printf("Enter a string :");
     gets(st);

     for(i = 0; st[i] != '\0' ; i ++)
     {
         if (isupper(st[i]))
             count ++;
     }

     printf("Count = %d", count);

}
