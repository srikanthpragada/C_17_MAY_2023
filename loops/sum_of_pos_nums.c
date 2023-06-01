// Accept numbers until 0 and display sum of positive numbers
// Date : 01-JUN-2023

void main()
{
 int n, total = 0;

     while(1)
     {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&n);

       if(n == 0)
           break;

       if (n > 0)
          total += n;
     }

     printf("Total = %d", total);
}
