#include<stdio.h>
int main(){
       int n,i;
       int lar=0;
    int arr[100];
    printf("Enter no of array elements");
    scanf("%d",&n);
     printf("Enter  array elements");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    lar=arr[0];
    for ( i = 0; i < n;i++)
    { 
    if (lar<arr[i])
      lar=arr[i];
    
    }
   printf("largest = %d",lar);

 return 0;
}