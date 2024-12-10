#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        string a;
        cin>>a;
        int i=0;
        int op=0;
        while(i<n){
            if(a[i]=='B'){
                op++;
                i+=s;
            }
            else{
                i++;
            }
        }
        cout<<op<<endl;
    }
}
