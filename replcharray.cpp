#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    cin>>arr;

    char c1,c2;
    cin>>c1>>c2;

    int i=0;
    while (arr[i]!='\0')
    {
        if (arr[i]==c1)
        {
            arr[i]=c2;
        }
        i++;
    }
    cout<<arr;
}