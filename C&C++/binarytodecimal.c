#include<stdio.h>
int main(){
    int num;
    printf("enter any binary number");
    scanf("%d",&num);
int rem;
int decimal=0;
int base = 1;
    while (num > 0)
    {
        rem=num%8;
        decimal=decimal+rem*base;
        base=base*2;
        num=num/8;
    }
    printf("decimal number is %d",decimal);
    return 0;
}