#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    vector<int>x;
    while(r<m && l<n){
        if(a[l]<b[r]){
            x.push_back(a[l]);
            l++;
        }
        else if(a[l]==b[r]){
            x.push_back(a[l]);
            x.push_back(b[r]);
            l++;
            r++;
        }
        else if(a[l]>b[r]){
            x.push_back(b[r]);
            r++;
        }
    }
     while (l < n) {
        x.push_back(a[l]);
        l++;
    }
     while (r < m) {
        x.push_back(b[r]);
        r++;
    }
    for(auto i:x){
        cout<<i<<" ";
    }

}
