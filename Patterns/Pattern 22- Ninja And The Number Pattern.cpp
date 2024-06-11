/*
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
void getNumberPattern(int n) {
    // Write your code here.
    int size=2*n-1;
    for(int i=1;i<=size;++i) {
        for(int j=1;j<=size;++j) {
            int minDist = min(min(i-1, j-1), min(size-i,size-j));
            cout<<n-minDist;
        }
        cout<<endl;
    }
}
