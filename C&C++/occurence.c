#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    int i=4;
    int rem=0;
    int flag=0;
    while (num>0)
    {
        rem = num%10;
        if (rem==i)
        {
            flag=flag+1;
        }
        num=num/10;
    }
    printf(" %d times",flag);
    return 0;
       
}