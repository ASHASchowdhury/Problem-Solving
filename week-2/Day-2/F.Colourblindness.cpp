#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int flag=0;
        for(int i=0;i<a.size();i++){
            if((a[i]=='R' && b[i]=='R') || (a[i]=='G' && b[i]=='B') || (a[i]=='B' && b[i]=='G') || (a[i]=='B' && b[i]=='B') || (a[i]=='G' && b[i]=='G')){
                flag++;
            }
        }
        if(flag==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
