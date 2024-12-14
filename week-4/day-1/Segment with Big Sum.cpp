#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0,ans=INT_MAX;
    long long sum=0;
    while(r<n){
        sum+=a[r];
       
        while(sum>=k && l<=r){
            ans=min(ans,r-l+1);
            sum-=a[l];
            l++;
        }
        r++;
    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
    }else{
    cout<<ans<<endl;
    }
}
