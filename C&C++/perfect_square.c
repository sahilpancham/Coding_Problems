#include<stdio.h>
int main(){
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    
    for (int i = 0; i < num; i++)
    {
        if (num==i*i)
        {
            printf("number is a perfect square %d ",i);
            return 0;
        }
        
        
    }
     printf("number is not a perfect square  ");
     return 0;
    
}