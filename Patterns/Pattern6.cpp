/*
Input: ‘N’ = 3
Output: 

1 2 3
1 2
1
*/
void Pattern6(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// or using n-i+1
void Pattern6(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
