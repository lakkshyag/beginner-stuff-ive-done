#include <iostream>

using namespace std;

int arrayCount(char arr[])
{
    int i=0;
    while (arr[i]!='\0')
    {
        i++;
    }

    return i;
}

bool arrayCheck(char arr[], int n)
{
    int i=0;
    while (i<=(n-1)/2)
    {
        if (arr[i]==arr[n-1-i])
        {
            i++;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char arr[100];
    cin>>arr;
    int n;

    n=arrayCount(arr);
    cout<<arrayCheck(arr, n);

    return 0;
}