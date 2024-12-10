#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int s,k;
    cin>>s>>k;
    string a;
    cin>>a;
    int l=0,r=0;
    int count=0;
    int ttl=INT_MAX;
    while(r<s){
        
        if(a[r]=='W'){
            count++;
        }
        if(r-l+1==k){
            ttl=min(ttl,count);
            if(a[l]=='W')count--;
     
            l++;
        }
        r++;
    }
    cout<<ttl<<endl;
}
}
