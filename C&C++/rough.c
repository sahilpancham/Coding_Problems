#include <stdio.h>
int main()
{
int n1, n2, minMultiple;
printf("Enter two positive integers: \n");
scanf("%d %d", &n1, &n2);
minMultiple = (n1>n2) ? n1 : n2;
while(1)
{
if( minMultiple%n1==0 && minMultiple%n2==0 )
{
printf("The LCM of %d and %d is %d.\n", n1, n2,minMultiple);
break;
}
++minMultiple;
}
return 0;
}