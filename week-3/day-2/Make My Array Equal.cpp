#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=0)
            m[a[i]]++;
        }
        if(m.size()==1 || m.size()==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}