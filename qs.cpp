#include<iostream>
#include<algorithm>
using namespace std;
void qs(int array[],int left,int right)
{
    if(left<right)
    {
        int s=array[(left+right)/2];
        int l=left-1;
        int r=right+1;

        while(1)
        {
            while(array[++l]<s);
            while(array[--r]>s);

            if(l>=r)
                break;
            else
                swap(array[l],array[r]);

        }
        qs(array,left,l-1);
        qs(array,r+1,right);
    }

}

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
        cin>>array[i];
    qs(array,0,n);

    for(int i=0; i<n; i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
