#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<int>a(n);
        vector<long long>z(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>z[i];
        }

        int r=0,l=0,mxlen=0;
        long long sum=0;

        while(r<n){
            sum+=a[r];

            if(r>0 && z[r-1]%z[r]!=0){
                l=r;
                sum=a[r];
            }
            while(sum>k && l<=r){
                sum-=a[l];
                l++;
            }
            if(sum<=k){
            mxlen=max(mxlen,r-l+1);
            }
            r++;
        }
        cout<<mxlen<<endl;
    }
}
