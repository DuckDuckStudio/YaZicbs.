#include<iostream>
using namespace std;
int main () {
	int n,k,w,tzh;//tzh:ÌåÖØºÍ 
	cin>>n>>k;
	int tizhong[n];
	for (int j=1;j<n;j++){
		cin>>w;
		tizhong[j]=w;
	}
	for (int z;k>0;k--) {
		cin>>z;
		tzh+=tizhong[z];
	}
	if (tzh<100){
		cout << "yes"; 
	}else{
		cout<<"no";
	}
	return 0;
}
