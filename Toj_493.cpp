#include<iostream>
using namespace std;                                                              
int main(){
	int n,m;
	cin>>n>>m;
	int ang;
	cin>>ang;
	int arr[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	if(ang==0||ang==360){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j!=0){
					cout<<" ";
				}
					
				
				cout<<arr[i][j];
			}
			cout<<'\n';
		}
		
		
		
		
	}
	else if(ang==90){
		for(int i=0;i<m;i++){
			for(int j=n-1;j>=0;j--){
				if(j!=n-1){
					cout<<" ";
				}
					
				
				cout<<arr[j][i];
			}
			cout<<'\n';
		}
		
		
		
	}
	else if(ang==180){
		for(int i=n-1;i>=0;i--){
			for(int j=m-1;j>=0;j--){
				if(j!=m-1){
					cout<<" ";
				}
					
				
				cout<<arr[i][j];
			}
			cout<<'\n';
		}
		
		
		
		
	}
	else if(ang==270){
		for(int i=m-1;i>=0;i--){
			for(int j=0;j<n;j++){
				if(j!=0){
					cout<<" ";
				}
				
				
				cout<<arr[j][i];
			}
			cout<<'\n';
		}
		
		
		
	}
	

	return 0;
}

