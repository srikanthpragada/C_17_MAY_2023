// Validate password
// Date : 03-JUN-2023

void main()
{
 char ch, i,  upper = 0, digit = 0;

     printf("Enter password :");

     for(i = 1; i <= 8; i ++)
     {
        ch = getch();
        putch('*');
        if(isdigit(ch))
             digit = 1;
        else
            if(isupper(ch))
              upper = 1;
     }

     if(upper)
        if(digit)
           printf("\nValid Password");
        else
           printf("\nDigit is missing");
     else
        if(digit)
           printf("\nUpper is missing");
        else
           printf("\nUpper and digit are missing");
}
