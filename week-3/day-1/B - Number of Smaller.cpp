#include<bits/stdc++.h>
using namespace std;

int main(){


int s,j;
cin>>s>>j;
int ar[s],ar1[j];
for(int i=0;i<s;i++){
    cin>>ar[i];
}
for(int i=0;i<j;i++){
    cin>>ar1[i];
}
int l=0,r=0,cnt=0;
while(r<j){
    if(l<s && ar[l]<ar1[r]){
        l++;
        cnt++;
    }
    else{
        cout<<cnt<<" ";
        r++;
    }
}

}
