#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack<string>st;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        st.push(a);
    }
    set<string>ans;
    while(!st.empty()){
        if(ans.find(st.top())==ans.end()){
            ans.insert(st.top());
            string x=st.top();
            if(x.size()>2){
                cout<<x.substr(x.size()-2);
            }
        }
        st.pop();
    }
    
    
}
