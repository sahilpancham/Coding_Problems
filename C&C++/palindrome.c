#include<stdio.h>
int main(){
    int num=121;
    int temp;
    int rev=0;
    int a=0;
    temp=num;                         //      if num==reverseofnum then it is palindrome 
    while (num>0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    printf("%d\n",rev);
    if (temp==rev)
    {
        printf(" number is palindrome");
    }
    else
    {
      printf(" number is not palindrome");
    }
    
    
    return 0;    
}