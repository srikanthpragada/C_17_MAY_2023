// Accept a number and display factorial
// Date : 01-JUN-2023

void main()
{
 int n, pn, i, total = 0, digit, fact;

     printf("Enter a number :");
     scanf("%d",&n);

     pn = n;

     while(n > 0)
     {
       digit = n % 10;

       // factorial for digit
       fact = 1;
       for(i = 2; i <= digit; i ++)
       {
        fact = fact * i;
       }

       total += fact;
       n = n / 10;
     }

     if(total == pn)
        printf("Strong Number");
     else
        printf("Not Strong Number");

}
