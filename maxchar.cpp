#include<iostream>
using namespace std;
int main()
{
    string str,temp,ans;

    while(cin>>str)
    {
        int count=1,max=0;
        for(int i=1;i<str.size();i++)
        {
            if(str[i]==str[i-1])
            {
                count++;
                if(count>max)
                {
                    max=count;
                    ans=str[i];
                }

            }

            else
                count=1;

        }
        cout<<ans<<" "<<max<<endl;
    }


}
