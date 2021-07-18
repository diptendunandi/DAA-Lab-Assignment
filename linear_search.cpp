#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n,i;
        cin>>n;
        int ya;
        int num;
        cin>>num;
       

        for(i=0;i<n;i++){
            cin>>ya;
            v.push_back(ya);
        }

        for(i=0;i<v.size();i++){
            if(v[i]==num){
             cout<<"Found"<<endl;
             break;
            }
           
        }

        if(i==n)
        cout<<"Not Found"<<endl;
       
        
     



    }

    return 0;
}