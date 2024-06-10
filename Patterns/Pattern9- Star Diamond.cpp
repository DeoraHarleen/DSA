/*
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

*/
void StarDiamond(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
            cout<<"*"; 
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*n-(2*i+1);k++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
