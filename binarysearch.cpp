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


int arraySearch(int arr[], int n, int x)
{
    int s=0;
    int e=n-1;

    while (s<=e)
    {
        if (arr[(s+e)/2]==x)
        {
            return (s+e)/2;
        }
        else if (arr[(s+e)/2]<x)
        {
            s=(s+e)/2+1;
        }
        else 
        {
            e=(s+e)/2-1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Enter array elements in ascending value only."<<endl;
    int arr[100];
    arrayCreate(arr, n);

    int x;
    cin>>x;
    cout<<arraySearch(arr, n, x);

    return 0;
}