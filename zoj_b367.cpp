#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		
		int m=0,n=0;
		cin>>m>>n;
		int arr[m][n];
		for(int j=0;j<m;j++){
		
			for(int k=0;k<n;k++)
				cin>>arr[j][k];
		}	
		bool judge=1;
		for(int j=0;j<m;j++){
			for(int k=0;k<n;k++){
			
				if(arr[j][k]!=arr[m-j-1][n-k-1]){
					judge=0;
					
					
				}
				 
				
			}
						
		}
		
		if(judge==1)
			cout<<"go forward \n";
		else if(judge==0)
			cout<<"keep defending \n";
	}
	
		
	
	





	return 0;
}

