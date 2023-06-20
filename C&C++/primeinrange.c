#include <stdio.h>
int main()
{
   int num1, num2, prime, i, j;
   printf("Enter the range\n");
   //Store the range in variables using scanf
   scanf("%d %d", &num1, &num2);
 
   //Display prime numbers for input range
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i<num2; ++i)
   {
     prime=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            prime=1;
            break;
         }
      }
      if(prime==0)
         printf("%d\n",i);
  }
  return 0;
}
