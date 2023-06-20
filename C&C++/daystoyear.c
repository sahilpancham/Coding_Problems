#include<stdio.h>
int main(){
    int days;
    int year;
    int week,day;

    printf("enter no of days\n");
    scanf("%d",&days);
    year=days/365;
week=(days%365)/7;
day= (days%365)%7;
printf("year=%d \n",year);
printf("weeks=%d \n",week);
printf("days=%d",day);
return 0;
}