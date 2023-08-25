//Largest element in the array
//Solution 1: Sorting (Brute Force - Time complexity= O(nlog(n)) )
// #include<iostream>
// #include<vector>
// using namespace std;

// int SortArray(vector <int> &arr)
// {
// 	sort(arr.begin(),arr.end());
// 	return arr[arr.size()-1];
// }
// int main()
// {
// 	vector<int> arr={2,5,1,3,0};
// 	cout<<" "<<SortArray(arr);
// return 0;
// }

//Solution 2: Using a max variable ( Recursive solution - Time complexity= O(1) )
#include<iostream>
using namespace std;

int largestElement(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={2,5,1,3,0};
    int n=5;
    int max=largestElement(arr,n);
    cout<<" "<<max;
}
