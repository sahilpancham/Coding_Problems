#include <stdio.h>
 static int a;
int func() {
    int i;
       static int a=0;
    int arr[5]={1,2,3,4,5};
    for ( i = 0; i < 5; i++)
    {
        printf(" %d \n",arr[i]);
         a++;
    }
   
        return a;
    }
int main() {

int b,c;

b = func();

printf("a=  %d",a);
    printf(" total no of elements =  %d",b);
   
    return 0;
}
