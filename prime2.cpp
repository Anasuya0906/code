#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    cin>>n;
    for(i=2;i<=n/2;i++)
       if(n%i==0)
         a+=1;
    cout<<a<<endl;
    if(a==0)
       cout<<"prime";
    else 
       cout<<"not prime";
    
}