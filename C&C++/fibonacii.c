#include<stdio.h>
int main (){
    int a,sum;
    sum=0;
    a=5;
    for (int i = 0; i <= 10; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}