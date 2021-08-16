#include<bits/stdc++.h>
using namespace std;
int binarySearch(int A[], int N, int x, int searchFirst)
{
    // search space is `A[low…high]`
    int low = 0, high = N - 1;
 
    // initialize the result by -1
    int result = -1;
 
    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and compares it with the target
        int mid = (low + high)/2;
 
        // if the target is found, update the result
        if (x == A[mid])
        {
            result = mid;
 
            // go on searching towards the left (lower indices)
            if (searchFirst) {
                high = mid - 1;
            }
            // go on searching towards the right (higher indices)
            else {
                low = mid + 1;
            }
        }
 
        // if the target is less than the middle element, discard the right half
        else if (x < A[mid]) {
            high = mid - 1;
        }
        // if the target is more than the middle element, discard the left half
        else {
            low = mid + 1;
        }
    }
 
    // return the found index or -1 if the element is not found
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,A[1000],target;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>target;
     int first = binarySearch(A, n, target, 1);
 
    // pass value 0 for the last occurrence
    int last = binarySearch(A, n, target, 0);
 
    int count = last - first + 1;
 
    if (first != -1) {
        cout<< target <<" occurs "<< count<<" times " <<endl;
    }
    else {
        cout<<"Not exist"<<endl;
    }
    }
 
    return 0;

}