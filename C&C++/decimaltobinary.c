#include<stdio.h>
int main(){
    int b=0,num;
    int base=1;
    int rem;
    printf("enter decimal no");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%2;
        b=b+rem*base;
        num=num/2;
        base=base*10;
    }
    printf("binary no is %d",b);
    return 0;
}