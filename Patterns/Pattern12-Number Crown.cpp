/*
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1
*/
void numberCrown(int n) {
    // Write your code here.
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
            space = space-2;
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }  
}
