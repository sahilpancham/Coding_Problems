#include <stdio.h>
int main() {
    int num1,num2,count,i;
    printf(" enter the range ");
    scanf(" %d %d",&num1,&num2);
for (i=num1;i<=num2;i++) 
{
    if (i%5==0)
    printf(" the number divisible by 5 is %d \n ",i);
    count++ ;
}
 printf(" the number divisible by 5 is %d \n ",i);
return 0;
}