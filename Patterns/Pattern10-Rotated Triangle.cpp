/*
Input: ‘N’ = 3

Output: 

*
**
***
**
*

*/
void RotatedTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
//or method 2 using 2*n-1
void RotatedTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n)
        {
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
