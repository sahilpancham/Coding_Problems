/*#include <stdio.h>
int main() {
    int a=2;
    int b=5,c; 
    printf(" a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
        printf("After swapping a=%d b=%d",a,b);
return 0;
}*/
#include <stdio.h>
int main() {
    int a=2;
    int b=5; 
    printf(" a=%d b=%d \n",a,b);
   a = a+b;
   b = a-b;
   a = a-b;
        printf("After swapping a=%d b=%d \n ",a,b);
return 0;
}

