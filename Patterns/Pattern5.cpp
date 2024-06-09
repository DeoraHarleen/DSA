/*
Input: ‘N’ = 3
Output: 
* * *
* *
*

*/
void Pattern5(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
//method 2 using n-i+1
void Pattern5(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n-i+1;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
