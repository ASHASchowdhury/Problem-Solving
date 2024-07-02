#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(find(a.begin()+i+1,a.end(),a[i])!=a.end()){
            count++;
            break;
        }
    }
if(count==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
return 0;
}
