#include<stdio.h>
#include<stdlib.h> 
int main(){
    int a[100][100],b[100][100];
    int r,c;
  printf("Enter no of rows and columns");
  scanf("%d %d",&r,&c);
    printf("Enter array 1 elements \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("Enter array 2 elements \n");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    int multi[100][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           for (int k = 0; k < c; k++)
           {
             multi[i][j]+= a[i][k]*b[k][j];
           }
           
        }
        
    }
    
    printf("Array elements are \n");
   for(int i=0;i<r;i++)    
{    
for(int j=0;j<c;j++)    
{    
printf("%d\t",multi[i][j]);    
}    
printf("\n");    
}    
    return 0;
    }