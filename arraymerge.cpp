#include <iostream>                                                               //merging 2 arrays which are already in ascending order

using namespace std;

void arrayCreate(int arr[], int n) 
{
    int i=0;
    while (i<=n-1)
    {
        cin>>arr[i];
        i++;
    }
    arr[i]=INT32_MAX;
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

void arrayMerge(int arr1[], int n1, int arr2[], int n2, int arr[])
{
    int i1=0, i2=0, i=0;
    while (i<=n1+n2-1)
    {
        if (arr1[i1]<=arr2[i2])
        {
            arr[i]=arr1[i1];
            i1++;
        }
        else
        {
            arr[i]=arr2[i2];
            i2++;
        }
        i++;
    }
}

int main()
{
    cout<<"Enter the array elements in ascending order only."<<endl;
    
    int n1;
    cin>>n1;
    int arr1[100];
    arrayCreate(arr1, n1);

    int n2;
    cin>>n2;
    int arr2[100];
    arrayCreate(arr2, n2);

    int arr[200];
    arrayMerge(arr1, n1, arr2, n2, arr);
    arrayPrint(arr, n1+n2);

    return 0;
}