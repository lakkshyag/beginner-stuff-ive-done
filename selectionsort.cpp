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
        int j=i+1;
        int min=arr[i];
        int minIndex=i;
        while(j<=n-1)
        {
            if (arr[j]<min)
            {
                min=arr[j];
                minIndex=j;
            }
            j++;
        }

        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
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