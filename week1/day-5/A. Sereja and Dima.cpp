#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    deque<int>dq(t);
    for(int i=0;i<t;i++){
        cin>>dq[i];
    }
    int ps=1;
    int a=0,b=0;
 
    while(!dq.empty()){
        int frt=dq.front(),last=dq.back();
        int mx=max(frt,last);
        if(ps%2==0){
            a+=mx;
        }
        else{
            b+=mx;
        }
        if(mx==frt){
            dq.pop_front();
        }
        else{
            dq.pop_back();
        }
        ps++;
    }
    cout<<b<<" "<<a;
}
