#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(int i=r; i<n; i++)
    {
        cout<<a[i]<<" ";

    }
    for(int i=0; i<r; i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}