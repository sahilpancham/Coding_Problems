#include <stdio.h>
int main() {
    int num;
    int prime;
    prime=1;
    printf(" enter any number \n");
    scanf(" %d",&num);
    for (int i=2; i<num; i++)
    {
        if (num%i==0)
        {
            prime=0;
            break;
        }  
    }
    if (prime==1)
    {
        printf(" no is prime");
    }
    else if (prime==0)
    {
        printf(" no is not prime");
    }
    
    
    
    return 0;
    
}