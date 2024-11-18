#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	
	double a1=a+(0.5*b);
	double b1=c+0.5*b;
	int rmn=4-(a+b+c);
	
	if(rmn+a1>b1){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}

}
