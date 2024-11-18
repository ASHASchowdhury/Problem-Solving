#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ar[n];
     long long sum=0;
     int odd=1e9+1;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
     if(ar[i]%2!=0){
        odd=min(odd,ar[i]);
     }   
    }
  if(sum%2!=0){
    sum-=odd;
    
  }
  cout<<sum<<endl;
}
