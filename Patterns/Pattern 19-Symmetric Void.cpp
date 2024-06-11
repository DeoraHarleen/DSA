/*
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

*/
void symmetry(int n) {
    // Write your code here.
    int initialSpace=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=0;j<initialSpace;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*"<<" ";
        }
        initialSpace=initialSpace+2;
        cout<<endl;
    }
    int initialSpacee=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=0;j<initialSpacee;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        initialSpace=initialSpacee-2;
        cout<<endl;
    }
}
