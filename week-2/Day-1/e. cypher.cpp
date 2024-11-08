#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int ar[s];
        for(int i=0;i<s;i++){
            cin>>ar[i];
        }
      
    for(int i=0;i<s;i++){
         int a;
        cin>>a;
        string d;
        cin>>d;
        int up=0,dwn=0;
        for(auto z:d){
            if(z=='D'){
             dwn++;
            }
            else{
                up++;
            }
        }
      int net=up-dwn;
      ar[i]=(ar[i]-net+10)%10;
    }
    for(int i=0;i<s;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    }
}
