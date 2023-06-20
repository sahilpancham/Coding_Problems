#include<stdio.h>
int main(){
    int n,a;
    int arr[10];
    printf("enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
for (int i = 0; i < n; i++)
{
   for (int j = i+1; j < n; j++)
   {
      if (arr[i]<arr[j])
      {
         a=arr[i];
         arr[i]=arr[j];
         arr[j]=a;
      }
   }
}
printf("new arr is");
for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}


    return 0;
    }