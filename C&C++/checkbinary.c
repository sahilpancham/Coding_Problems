#include<stdio.h>
int main(){
    int num;
    int a;
    printf(" enter number \n");
    scanf(" %d",&num);
    while (num>0)
    {
        a=num%10;
        if (a!=1 && a!=0)
        {
            printf(" number is not binary");
            break;
        }
       num=num/10;
          if(num==0)
        {
            printf("num is binary");
        }

    }
    return 0;
}