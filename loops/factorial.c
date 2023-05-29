// Accept a number and display factorial
// Date : 29-MAY-2023

void main()
{
 int n, i, fact = 1;

     printf("Enter a number :");
     scanf("%d",&n);

     for(i = 2; i <= n; i ++)
     {
        fact = fact * i;
     }

     printf("Factorial = %d", fact);
}
