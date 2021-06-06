#include<bits/stdc++.h>
using namespace std;
int n;
int fibo(int a,int b,int i)
{
    int c;
    c=a+b;
    if(n==1)
    {
        return a;
    }
    if(n==2)
    {
        return b;
    }
    if(i==n)
    {
        return c;
    }
    return fibo(b,c,i+1);
}
int main()
{
    cin>>n;
    cout<<fibo(0,1,3);

}