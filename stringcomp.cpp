#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        if(a.size()==b.size())
        {
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            cout<<a<<" "<<b<<endl;
            if(a==b)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;

        }
        else cout<<"no"<<endl;
    }
}
