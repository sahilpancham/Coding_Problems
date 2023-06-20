#include<stdio.h>

#include<conio.h>
int intonly(){
    int num=0;
    int ch;
    do
    {
        ch=getch();
        if (ch>=48&&ch<=58)
        {
            printf("%d",ch);
            num=num*10+(ch-48);
        }
        if (ch==13)
        {
            break;
        }
        

    } while (1);
    
return num;

}
int main(){
    int val;
    val=intonly();
    printf(" you entered %d",val);
    return 0;
}