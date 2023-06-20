#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("Enter a string ");
    gets(str);
    int n;
    n = strlen(str);
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("%s",str);
    return 0;
}