#include <stdio.h>
int main() {
    int a,b;
    int num;
    int prime;
    
 printf(" Enter any first number");
 scanf(" %d",&a);
 printf(" Enter any last number");
 scanf(" %d",&b);
 int j;
 for (int i = a+1; i < b; i++)
 {
     prime=0;
     for ( j=2; j<i/2; j++)
    {
        if (i%j==0)
        {
            prime=1;
            break;
        }  
    }
    if (prime==0)
    {
        printf(" %d",i);
    }
   
 }
 return 0;

}