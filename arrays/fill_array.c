// Take an array of 10 int and fill it with random numbers
// Date : 02-JUN-2023

void main()
{
 int a [10], i;

     srand(time(0));

     for(i = 0; i < 10; i ++)
     {
        a[i] = rand() % 100;
        printf("%5d", a[i]);
     }


}
