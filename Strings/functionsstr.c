#include <stdio.h>
#include <string.h>
int main() {
 char str1[] = "Sahil";
 char str2[] = "Pancham";
 char str3[10]="";
 //printf("The length of s1 is %d",strlen(str1));
// puts(strcat(str1,str2));
// puts(strrev(str1));
puts(strcpy(str3,strcat(str1,str2)));
puts(str3);

 return 0;
}