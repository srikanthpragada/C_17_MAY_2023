// Validate password
// Date : 08-JUN-2023

void main()
{
 char ch, i,  upper = 0, digit = 0, special = 0;
 char pwd[10];

     printf("Enter password :");
     gets(pwd);

     for(i=0; pwd[i] != '\0'; i ++)
     {
        if(isdigit(pwd[i]))
             digit = 1;
        else
            if(isupper(pwd[i]))
              upper = 1;
            else
                if(pwd[i] == '*' || pwd[i] == '@' || pwd[i] == '_')
                    special = 1;
     }

     if(upper && digit && special)
        puts("Valid Password");
     else
        puts("Invalid Password");

}
