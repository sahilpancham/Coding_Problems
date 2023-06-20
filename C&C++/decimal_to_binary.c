#include<stdio.h>
#include<stdlib.h>
int main(){
    int num; 
    printf("Enter decimal number");
    scanf("%d",num);
int i;
    int binarynum[10];
    for ( i = 0; num > 0; i++)
    {
        binarynum[i]=num%2;
        num=num/2;
    }
    for (int j = i-1;j >=0; j--)
    {
        printf("%d",binarynum[j]);
    }
    
    return 0;
}