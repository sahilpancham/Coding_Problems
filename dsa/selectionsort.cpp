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
    cout<<"array elements are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    int temp;

for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (arr[j]<arr[i])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    
}
cout<<" sorted array is ";
for (int i = 0; i < n; i++)
{
   cout<<arr[i];

}


      return 0;
}