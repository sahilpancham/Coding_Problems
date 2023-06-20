#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    int num;
    cout << "enter no of elements in array" << endl;
    cin >> n;

    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array elements are ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    int counter = 1;
    while (counter < n)
    {

        int i;
        int temp;
        for (int i = 0; i < n - counter; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            
        }
         counter++;

    }
    cout << "  sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout <<" "<<arr[i];
    }

    return 0;
}