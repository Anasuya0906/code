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
    int *mx=max_element(arr,arr+n);
    int fr[*mx+1]={0};
    for(int i=0;i<n;i++)
    {
        fr[arr[i]]++;
    }
    int id,maxi=0;
    for(int i=0;i<=*mx;i++)
    {
        if(maxi<fr[i])
        {
            maxi=fr[i];
            id=i;
        }
    }
    cout<<"the id of the customer who visited more times "<<id;
}