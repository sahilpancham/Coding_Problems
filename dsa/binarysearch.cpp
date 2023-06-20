#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    int num;
    cout<<"enter no of elements in array"<<endl;
    cin>>n;

    cout<<"enter array elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements are ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"enter the number ";
    cin>>num;
    int s=0,e=n;
 
    while(s<=e){
        int mid=(s+e)/2;  //this should inside while loop
        if (arr[mid]==num)
        {
            cout<<"element found at index "<<mid;
            break;
        }
        else if (arr[mid]>num)
        {
            e=mid-1;
            
        }
        else
        {
            s=mid+1;
           
        }
    }
      return 0;
}