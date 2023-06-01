// Validate pin
// Date : 01-JUN-2023

void main()
{
 char ch, i, count = 0;

     printf("Enter pin :");
     for(i = 1; i <= 4; i ++)
     {
        ch = getch();
        putch('*');
        if(isdigit(ch))
             count ++;
     }

     if(count == 4)
        printf("\nValid PIN");
     else
        printf("\nInvalid PIN");
}
