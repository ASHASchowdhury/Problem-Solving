#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> v;
    int n;

    while(cin>>n){
        if(n==-1){
            break;
        }
        v.push_back(n);
    }
     v.sort();
    v.unique();

    for(int i :v){
        cout<<i<<" ";
    }
}
