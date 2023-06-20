#include<stdio.h>
#include <string.h>
int main(){
    char arr[100]={"Sahilpancham"};
    int i;
    printf("the string is %s \n",arr);
    for ( i = 0; arr[i] !='\0' ; i++){

    }
  
     printf("the length of  string is %d \n",i);
    int temp;
    for (int i = 0; i < 12/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[12-i-1];
        arr[12-i-1]=temp;
    }
    printf("the reverse string is %s",arr);
  return 0;
}