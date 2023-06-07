// Take two strings and print relationship
// Date : 07-JUN-2023

void main()
{
 char s1[50], s2[50]; // string
 int result;

     printf("Enter first string :");
     gets(s1);
     printf("Enter second string :");
     gets(s2);

     result = strcmp(s1,s2);

     if(result == 0)
        puts("Same");
     else
        if(result > 0)
           puts("First string is bigger");
        else
           puts("Second string is bigger");

}
