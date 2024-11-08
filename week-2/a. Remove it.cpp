#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,x;
    cin>>a>>x;
    int ar[a];
    for(int i=0;i<a;i++){
        int e;
        cin>>e;
        if(e==x){
            continue;
        }
        cout<<e<<" ";
    }
    cout<<endl;

}
