#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

signed main(){
	string str;
	
	
	while(cin>>str){
		int total=0;
		int total2=0;
		if(str=="0")
			break;
	
	for(int i=0;i<str.size();i+=2){
		total+=str[i]-'0';
	}
	
	for(int i=1;i<str.size();i+=2){
		total2+=str[i]-'0';
	}	
	
	int p=abs(total-total2);
	
	if (p%11==0)
		cout<<str<<" is a multiple of 11."<<endl;
	else 
		cout<<str<<" is not a multiple of 11."<<endl;

	}
	





	return 0;
}

