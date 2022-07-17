#include<iostream>
using namespace std;


int main(){

	int n,m;
	while(cin>>n>>m&&(n||m)){
		string ans="";
		string str;
		for(int i=0;i<n;i++){
			cin>>str;
			ans+=str;
		}
		
		for(int j=0;j<m;j++){
			int k;
			cin>>k;
			k-=1;
			cout<<ans[k];
		}
		cout<<endl;
	}
	




	return 0;
}

