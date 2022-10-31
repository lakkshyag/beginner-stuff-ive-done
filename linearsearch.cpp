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
    int i=0;
    while (i<=n-1)
    {
        if (arr[i]==x)
        {
            return i;
        }
        
        i++;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    arrayCreate(arr, n);
    int x;
    cin>>x;
    cout<<arraySearch(arr, n, x);

    return 0;
}