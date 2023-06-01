// Opposite case
// Date : 01-JUN-2023

void main()
{
 char ch;


     printf("Enter char :");
     ch = getche();

     if(ch >= 65 && ch <= 90)
        ch = ch + 32;  // convert to lower
     else
        if(ch >= 97 && ch <= 122)
            ch = ch - 32; // convert to upper

     printf("\nChar = %c", ch);
}
