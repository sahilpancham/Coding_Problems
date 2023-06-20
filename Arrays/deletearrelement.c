#include <stdio.h>
void main(){
    int i;
    int element;
    int n;
    int pos;
    int found;
    int arr[10];
      printf("Enter how many elements\n");
        scanf("%d", &n);
    printf(" enter array elements \n");
    for(i=0;i<5;i++){
 scanf(" %d",&arr[i]);
    }
   printf(" array elements are \n");
   for(i=0;i<5;i++){
       printf("%d",arr[i]);
   }
    printf("Enter the element to be deleted\n");
        scanf("%d", &element);
 
        for (i = 0; i < n; i++)
        {
            if (arr[i] == element)
            {
                found = 1;
                pos = i;
                break;
            }
        }
        if (found == 1)
        {
            for (i = pos; i <  n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            printf("The resultant vector is \n");
            for (i = 0; i < n - 1; i++)
            {
                printf("%d\n", arr[i]);
            }
        }
       
    

}

