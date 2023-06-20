
#include <stdio.h>
int main() {
    int i,j,num;

    int b=5;
    int arr[5]={1,3,6,9,7};
    printf(" enter the number");
    scanf("%d",&num);
    
    for (i=0;i<5;i++){

        if (arr[i]==num) {
        printf(" number found at index %d \n",i);
arr[i]=6;

        } }
        if (arr[i]==5){
        printf(" number not found");
        }
        printf(" arr elements");
        for (i=0;i<5;i++){
 
        printf("  %d \n",arr[i]);

        }

    return 0;
}