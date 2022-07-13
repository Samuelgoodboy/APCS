#include<iostream>
using namespace std;
int arr[105];

int main(){
	arr[0]=1;
	arr[1]=1;
	int n;
	for(int i=2;i<101;i++)
		arr[i]=arr[i-1]+arr[i-2];
	while(cin>>n){
	
	arr[n]=arr[n-1]+arr[n-2];
	cout<<arr[n]<<endl;
}
	







	return 0;
}

