#include<iostream>
#include<cmath>
using namespace std;
void Powerset(char array[],int len)
{
	for(int i=0;i<pow(2,len);i++)
	{
		for(int j=0;j<len;j++)
			if(i&(1<<j))
				cout<<array[j];
		cout<<endl;
	}
}
int main()
{
	char array[]="abcd";
	int len=sizeof(array)/sizeof(char)-1;
	cout<<len<<endl;
	Powerset(array,len);
}
