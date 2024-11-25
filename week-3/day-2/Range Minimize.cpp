#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int>a(s);
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    if(s<=3){
        cout<<0<<endl;
        continue;
    }
    sort(a.begin(),a.end());
    int rslt=min(a[s-1]-a[2],a[s-2]-a[1]);
    rslt=min(rslt,a[s-3]-a[0]);
    cout<<rslt<<endl;
    }
}
