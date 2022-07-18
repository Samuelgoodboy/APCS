#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
int gcd(int a,int b){
	while((a%=b)&&(b%=a));
		return a+b;
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<gcd(a,b)<<endl;		
		
	}






	return 0;
}

