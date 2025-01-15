#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<s){
            cout<<-1<<endl;
            continue;
        }
        if(sum==s){
            cout<<0<<endl;
              continue;
              
        }
        int l=0,r=0,csum=0,mxlen=0;
        while(r<n){
            csum+=a[r];
            while(csum>s){
                csum-=a[l];
                l++;
            }
            if(csum==s){
             mxlen=max(mxlen,r-l+1);
            }
            r++;
        }
        int op=n-mxlen;
        cout<<op<<endl;
    }
}
