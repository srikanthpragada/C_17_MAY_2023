// Invert case
// Date : 02-JUN-2023

void main()
{
 char ch;

     printf("Enter chars :");
     while(1)
     {
        ch = getch();
        if(ch == '*')
           break;

        if(isupper(ch))
            ch = tolower(ch);
        else
            ch = toupper(ch);
        putch(ch);
     }

}
