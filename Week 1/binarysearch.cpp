#include <algorithm>
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<int> a;
    int ya,f;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ya;
        a.push_back(ya);

    }
    int asize=a.size();
    cin>>f;



    if (binary_search(a.begin(),a.end(), f))
        cout << "\nElement found at ";
    else
        cout << "\nElement not found";
  

    }
    return 0;
}
