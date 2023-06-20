#include<stdio.h>
int main (){
    int a,sum;
    sum=1;
    a=5;
    for (int i = 1; i <= a; i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}