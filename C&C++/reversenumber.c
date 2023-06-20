#include <stdio.h>
int main() {
    int rem;
    int sum=0;
    int num;
    printf("Enter any number \n");
    scanf("%d", &num);
 
  while (num>0)  {
      rem = num%10;
      sum = sum*10+rem;
      num/=10;
  }
  printf(" reverse no is %d ",sum);
  return 0;
}