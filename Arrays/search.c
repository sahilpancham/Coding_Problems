#include <stdio.h>
int main() {
    int i,num;
    int arr[5]={1,3,6,9,7};
    printf(" enter the number");
    scanf("%d",&num);
    
    for (i=0;i<5;i++){

        if (arr[i]==num) {
        printf(" number found at index %d \n",i);} }
        if (arr[i]==5){
        printf(" number not found");
        }
    
    return 0;
}