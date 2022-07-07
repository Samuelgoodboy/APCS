#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int t=1;
	while(n!=0){
		int a;
		int sum=0;
		int arr[n]={};
		for(int i=0;i<n;i++){ 
			cin>>a;
			arr[i]=a;
			sum=sum+a;
			
			
		}
		int avg=sum/n;
		int ans=0;
		for(int j=0;j<n;j++){
			ans = ans + abs (avg-arr[j]);
		
			
		}
		
		cout<<"Set #"<<t<<endl;
		cout<<"The minimum number of moves is "<<ans/2<<"."<<endl;
		t++;
		cin>>n;
	}
	


	return 0;
	
}

