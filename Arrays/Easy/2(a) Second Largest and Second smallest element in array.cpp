//This code is used when duplicates elements are not present in the code
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the value for n: " << endl;
    cin >> n;

    if (n <= 2)
    {
        cout << "Lesser number of elements! " << endl;
    }
    else
    {
        int arr[n];

        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int second_smallest = arr[1];
        int second_largest = arr[n - 2];

        cout << "Sorted array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
        cout << "Second smallest number in the array is : " << second_smallest << endl;
        cout << "Second largest number in the array is : " << second_largest << endl;
    }

    return 0;
}
