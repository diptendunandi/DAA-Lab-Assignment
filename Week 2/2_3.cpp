#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/* Standard binary search function */
int binarySearch(int arr[], int low, int high, int x)
{
	if (high >= low)
	{
		int mid = low + (high - low)/2;
		if (x == arr[mid])
			return mid;
		if (x > arr[mid])
			return binarySearch(arr, (mid + 1), high, x);
		else
			return binarySearch(arr, low, (mid -1), x);
	}
	return -1;
}

/* Returns count of pairs with difference k in arr[] of size n. */
int countPairsWithDiffK(int arr[], int n, int k)
{
	int count = 0, i;
	sort(arr, arr+n); // Sort array elements

	/* code to remove duplicates from arr[] */

	// Pick a first element point
	for (i = 0; i < n-1; i++)
		if (binarySearch(arr, i+1, n-1, arr[i] + k) != -1)
			count++;

	return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,arr[10000],k;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        cout <<countPairsWithDiffK(arr, n, k)<<endl;
        return 0;
    }
}