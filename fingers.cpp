#include<bits/stdc++.h>
using namespace std;
int finger(int n)
{
    if(n%8==1)
    {
        return 1;
    }
    else if(n%8==2||n%8==0)
    {
        return 2;
    }
    else if(n%8==3||n%8==7)
    {
        return 3;
    }
    else if(n%8==4||n%8==6)
    {
        return 4;
    }
    return 5;
}
int main()
{
    int n;
    cin>>n;
    cout<<finger(n);
}