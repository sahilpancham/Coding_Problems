#include<stdio.h>
int main() {
    int a,b;
    printf(" Enter two number\n ");
    scanf("%d %d",&a,&b);
    for (int i = 0; i < b; i++)
    {
       a++;
    }
     printf(" %d",a);
    return 0;
}