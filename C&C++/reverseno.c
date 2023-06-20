#include <stdio.h>
int main() {
    int num;
    int rev=0,rem;
    printf(" enter any number");
    scanf("%d", &num);
    while (num>0) {
        rem= num%10;
        rev = rev*10 + rem;
        num/=10;
    }
    
    printf(" reverse no is %d ",rev);
    return 0;
}