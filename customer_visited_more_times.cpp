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
    int compare=0,a;
    for(int j=0;j<n;j++)
    {
        if(j==0 || arr[j]!=arr[j-1])
        {
            int c=0;
            for(int i=j+1;i<n;i++)
            {
                if(arr[j]==arr[i])
                {
                    c++;
                }
            }
            if(compare<c)
            {
                compare=c;
                a=arr[j];
            }
        }
    }
    cout<<a;
   
}  