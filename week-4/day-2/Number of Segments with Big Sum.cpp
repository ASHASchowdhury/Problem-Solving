#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    long long sum=0;
    int l=0,r=0;
    long long gds=0;
    while(r<n){
        sum+=a[r];
        while(sum>=s){
            gds+=n-r;
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<gds<<endl;
}
