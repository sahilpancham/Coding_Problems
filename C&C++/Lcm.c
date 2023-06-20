#include<stdio.h>
int main(){
    int n1,n2;
    n1=10;
    n2=5;
    
    
    for (int i = 2; i <= n1*n2; i++)
    {
        if (i%n1==0 && i%n2==0)
        {
            printf(" LCM is %d",i);
            break;
        }
        
    }
    return 0;
}