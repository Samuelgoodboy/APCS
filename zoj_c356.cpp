//艾加密小容量 
#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	char a;
	int r=0;//橫 
	int c=0;//直 
	int answer=0;//第幾個INDEX;
	
	while(cin>>a){ 
		if(answer==t*r+c){
		r++;
		c++;
		cout<<a;
		}
		answer++;
	
		if(answer==t*t)
		break;
	
		
		
	} 
	
		



	return 0;
}

