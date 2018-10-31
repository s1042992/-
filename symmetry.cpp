#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len=a.size();
    bool flag=true;
    if(len%2==1)
    {
        for(int i=0; i<=len/2; i++)
        {
            if(a[len/2-i]!=a[len/2+i])
            {
                flag=false;
                break;
            }
        }
    }
    else
    {
        for(int i=0;i<len/2;i++)
        {

            if(a[len/2-1-i]!=a[len/2+i])
            {
                flag=false;
                break;
            }
        }
    }

    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
