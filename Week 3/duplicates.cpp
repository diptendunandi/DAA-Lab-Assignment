#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int t;
     cin>>t;
     while(t--){
  int i,arr[10000],j,no;
  cin>>no;
  
  for(i=0;i<no;i++)
  {
   cin>>arr[i];
  }
 
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    cout<<arr[i];
    }
   }
   }
     }
  return 0;
 }