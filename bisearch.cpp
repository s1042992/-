#include<iostream>
#include<algorithm>
using namespace std;
int bisearch(int array[],int n,int finds)
{
    int lower=0,upper=n-1,mid;
    while(lower<=upper)
    {
        mid=(lower+upper)/2;
        if(array[mid]==finds)
            return mid;
        else
        {
            if(array[mid]<finds)
                lower=mid+1;
            else
                upper=mid-1;
        }
    }
}
void quickSort(int number[], int left, int right) {
    if(left < right) {
        int s = number[(left+right)/2];
        int i = left - 1;
        int j = right + 1;

        while(1) {
            while(number[++i] < s) ;  // 向右找
            while(number[--j] > s) ;  // 向左找
            if(i >= j)
                break;
            swap(number[i], number[j]);
        }

        quickSort(number, left, i-1);   // 對左邊進行遞迴
        quickSort(number, j+1, right);  // 對右邊進行遞迴
    }
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    quickSort(array,0,n);
    int finds;
    cin>>finds;
    cout<<bisearch(array,n,finds)<<endl;

}
