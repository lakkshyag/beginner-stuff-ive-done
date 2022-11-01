#include <iostream>                                                     //if input array is 1 2 3 4 output array will be 1 2 3 4 1 2 3 4 

using namespace std;

void arrayCreate(int arr[], int n)
{
    int i=0;
    while (i<=n-1)
    {
        cin>>arr[i];
        i++;
    }
}

void arrayPrint(int arr[], int n)
{
    int i=0;
    while (i<=n-1)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}

void arrayRepeat(int arr[], int n)
{
    int i=0;
    while (i<=n-1)
    {
        arr[i+n]=arr[i];
        i++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[200];
    arrayCreate(arr, n);
    arrayRepeat(arr, n);
    arrayPrint(arr, 2*n);

    return 0;
}