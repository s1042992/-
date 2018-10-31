#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib[n];
    fib[0]=1,fib[1]=1;
    for(int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        if(i==n-1)
            cout<<fib[i]<<endl;
    }
}
