#include <stdio.h>
int main() {
    int num,a,sum=0;
    printf(" Enter any number \n ");
    scanf("%d ", &num);
    printf(" given number is %d  \n",num);
    while (num>0) {
    a = num%10;
    sum = sum +a;
    num /= 10;
    } 
 printf("sum of  given number is %d  \n",sum);
 return 0;
}

