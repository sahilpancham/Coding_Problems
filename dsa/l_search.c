#include<stdio.h>
int l_search(int [],int ,int );
int main(){
    int arr[100],position,n,search;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    printf("enter array elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&search);
    position=l_search(arr,n,search);
    if (position==-1)
    {
        printf("element not present");
    }
    else
    {
    printf(" element is present at position %d",position+1);
    }
    
    
}
int l_search(int arr[],int n, int find){
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==find){
            printf(" element is present at position %d",i+1);
        }
        else
        {
              printf("element not present");
        }
        
    
    }
return 0;
}