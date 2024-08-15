//TC: O(n^3)
//SC: O(1)
#include<iostream>
#include<climits>
using namespace std;
int maxSubarray(int arr[],int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
                ans=max(ans,sum);
            }
        }
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
