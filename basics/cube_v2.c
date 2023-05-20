// Print cube of a number taken from user
// Date : 20-MAY-2023

#include <stdio.h>

main()
{
  int num, cube;  // variables

    // input
    printf("Enter a number :");
    scanf("%d", &num);

    // process
    cube = num * num * num;

    // output
    printf("Cube of %d is %d", num, cube);

}
