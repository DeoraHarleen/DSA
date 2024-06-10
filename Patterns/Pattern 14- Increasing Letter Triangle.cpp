/*
Input: ‘N’ = 3
Output: 

A
A B
A B C
*/
void LetterTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
