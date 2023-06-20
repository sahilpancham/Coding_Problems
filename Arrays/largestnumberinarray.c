#include <stdio.h> 
void main() {
    int i=0,arr[10];
    int num=0,largest=0;
    printf(" Enter no of  elements in array \n ");
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        printf(" Enter array elements ");
         scanf("%d", &arr[i]);
    }
     largest = arr[0];
    for (i=0; i<num;i++) {

   
    if (largest<arr[i])
    largest = arr[i];
   
}
 printf(" largest number is %d " , largest);
}
