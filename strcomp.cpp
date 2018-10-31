#include<iostream>
using namespace std;
bool comp(string a,string b)
{
    if(a.size()!=b.size())
        return false;
    else
    {
        int count[26]={0};
        for(int i=0;i<a.size();i++)
            count[a[i]-'a']++;
        for(int j=0;j<b.size();j++)
            count[b[j]-'a']--;
        for(int k=0;k<26;k++)
            if(count[k]!=0)
                return false;
        return true;
    }

}
int main()
{
    string a,b;
    cin>>a>>b;
    if(comp(a,b))
        cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;

}
