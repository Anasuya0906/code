#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    cout<<mini;
}