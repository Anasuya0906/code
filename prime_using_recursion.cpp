#include<bits\stdc++.h>
using namespace std;
int n;
bool isprime(int i)
{
    if(i==n)
    {
      return true;  
    }
    if(n%i==0)
    {
        return false;
    }
    return isprime(i+1);
}
int main()
{
    cin>>n;
    if(isprime(2))
    {
        cout<<"it is a prime";
    }
    else{
        cout<<"not a prime";
    }

}