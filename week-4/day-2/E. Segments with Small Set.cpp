#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0,count=0;
    long long gseg=0;
    vector<int>freq(100001,0);


    while(r<n){
        if(freq[a[r]]==0){
            count++;
        }
        freq[a[r]]++;

        while(count>k){
            freq[a[l]]--;
            if(freq[a[l]]==0){
                count--;
            }
            l++;
        }
        gseg+=(r-l+1);
        r++;
    }
    cout<<gseg<<endl;
    
}

