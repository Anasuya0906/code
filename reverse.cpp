#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,summ=0;
    cin>>n;
    while(n)
    {
        rem=n%10;
        n=n/10;
        summ=rem*rem+summ;
        if(n==0) 
        {
           n=summ;
           if(summ<10)
           {
               break;
           }
           summ=0;
        }
    }
    cout<<summ<<endl;
    if(summ==1)
       cout<<"happy number";
    else
       cout<<"not a happy number";
    return 0;
}