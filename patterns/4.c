#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter n \n");
    scanf("%d",&n);
    static int num=0;
   
    for (i = 1; i <= n; i++)
    {
          
        for (j = 1; j <= 2*n-1; j++)
        {
            
            if (j>=n+1-i&&j<=n-1+i)
            {
                printf(" %d",num);
                 num++;
            }
            else{
                printf(" ");}

               
        }
        
        printf("\n");
    }
    return 0;
}