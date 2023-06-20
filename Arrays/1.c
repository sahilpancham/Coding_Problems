#include <stdio.h>
int main(){
    int i;
    int arr[10];
    printf(" enter array elements");
    for(i=0;i<5;i++){
 scanf(" %d",&arr[i]);
    }
   printf(" array elements are");
   for(i=0;i<5;i++){
       printf("%d",arr[i]);
   }
   return 0;
}