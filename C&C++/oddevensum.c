#include <stdio.h>
 
void main()
{
    int i, num, oddsum = 0, evensum = 0;
 
    printf("Enter any number\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            evensum = evensum + i;
        else
            oddsum = oddsum + i;
    }
    printf("Sum of all odd numbers upto %d  = %d\n", num, oddsum);
    printf("Sum of all even numbers upto %d = %d\n", num, evensum);
}