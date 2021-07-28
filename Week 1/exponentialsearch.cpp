#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int lo, int hi, int x)
{
    while (lo <= hi) {
        int m = lo + (hi - lo) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            lo = m + 1;
        else
            hi = m - 1;
    }
    return -1;
}

int exponentialSearch(vector<int> &arr, int n, int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= x)
        i = i * 2;

    return binarySearch(arr, i / 2,
                        min(i, n - 1), x);
}

int main()
{
    int n,ya,x;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>ya;
        arr.push_back(ya);
    }
    cin>>x;
    int result = exponentialSearch(arr, n, x);
    if (result == -1) {
        cout << "Element not found !!";
    }
    else cout << "Element found at index " << result;
    return 0;
}