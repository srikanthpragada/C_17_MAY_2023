// Opposite case
// Date : 01-JUN-2023

void main()
{
 char ch;


     printf("Enter char :");
     ch = getch();

     if(isupper(ch))
        ch = tolower(ch);
     else
        if(islower(ch))
            ch = toupper(ch);

     printf("\nChar = %c", ch);
}
