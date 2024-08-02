#include<iostream>
using namespace std;

void pascalTriangle(int n)
{
    long long ans=1;
    cout<<" "<<ans;
    for(int i=1;i<n;i++)
    {
        ans=ans*(n-i);
        ans=ans/i;
        cout<<" "<<ans;
    }
}

int main()
{
    int n;
    cin>>n;
    pascalTriangle(n);
    return 0;
}
//TC: O(N)
//SC: O(1)
