#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int s;
    cin>>s;
    string a;
    cin>>a;
    int l=0,r=s-1,cnt=s;
    while(l<=r){
       if(a[l]==a[r]){
        break;
       }
       else{
        cnt-=2;
        l++,r--;
       }
    }
    cout<<cnt<<endl;
}
}
