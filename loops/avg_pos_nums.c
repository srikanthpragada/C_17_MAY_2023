// Accept numbers until 0 and display avg of positive numbers
// Date : 01-JUN-2023

void main()
{
 int n, total = 0, count = 0;

     while(1)
     {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&n);

       if(n == 0)
           break;

       if (n < 0)
           continue;

       total += n;
       count ++;

     }

     printf("Avg = %d", total / count);
}
