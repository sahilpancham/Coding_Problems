#include<iostream>
using namespace std;
int sumn(int a){
    int sum=0;
    for (int i = 0; i <= a; i++)
    {
        sum=sum+i;
       
    }
     return sum;
}
int main(){
    int b=0;
    int num;
    b=sumn(5);
    cout<<b;
    return 0;
}