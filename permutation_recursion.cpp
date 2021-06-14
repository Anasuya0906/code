#include<bits\stdc++.h>
using namespace std;
void permutation(string s1,string s2,int va[])
{
    if(s1.size()==s2.size())
    {
        cout<<s2;
        cout<<"\n";
        return;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(va[i]==0)
        {
            va[i]=1;
            permutation(s1,s2+s1[i],va);
            va[i]=0;
        }
    }
}
int main()
{
    string s1;
    cin>>s1;
    int va[s1.size()]={0};
    string s2="";
    permutation(s1,s2,va);

}