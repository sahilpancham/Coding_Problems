#include <stdio.h>
int main() {
    int num, rem;
    printf("enter number");
    scanf(" %d", &num);
    rem = num % 2;
    if (rem==0) 
        printf("even number", num);
    
    else 
         printf("odd number", num);
     return 0;
}