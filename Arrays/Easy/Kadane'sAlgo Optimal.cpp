//TC: O(n)
//SC: O(1)
#include<iostream>
#include<climits>
using namespace std;
int maxSubarray(int arr[],int n)
{
    int ans=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0) sum=0;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=maxSubarray(arr,n);
    cout<<""<<result;
    return 0;
}
