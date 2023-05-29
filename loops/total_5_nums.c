// Accept 5 numbers and display total
// Date : 29-MAY-2023

void main()
{
 int n, i, total = 0;

     for(i = 1; i <= 5; i ++)
     {
       printf("Enter a number :");
       scanf("%d",&n);

       total += n;
     }

     printf("Total = %d", total);


}
