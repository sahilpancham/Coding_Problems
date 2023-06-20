#include <stdio.h>
int main() {
    int num;
    int a;
    int sum;
    sum = 0;
    printf(" Enter any number \n ");
    scanf("%d",&num);
    printf(" given number is %d  \n",num);
    while (num>0) {
    a = num%2;
    sum = sum*10+a;
    num /= 2;
    } 
 printf("binary form of  given number is %d \n",sum);
 return 0;
}
