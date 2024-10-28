#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
 
    int z=max(((2*a)-1),((2*b)-1));
    int x=max(z,(a+b));

    cout<<x<<endl;
}
