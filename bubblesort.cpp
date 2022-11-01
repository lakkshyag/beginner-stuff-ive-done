#include <iostream>

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

void arraySort(int arr[], int n)
{
    int i=0;
    while (i<=n-2)
    {
        int j=0;
        while (j<=n-2-i)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
        }
        i++;
    }       
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    arrayCreate(arr, n);
    arraySort(arr, n);
    arrayPrint(arr, n);
    
    return 0;
}

