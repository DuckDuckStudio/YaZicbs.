#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7==0){
			continue;
		}
		int m=i,flag=0;
		while(m!=0){
			if(m%10==7){
				flag=1;
				break;
			}
			m/=10;
		}
		if(flag) continue;
		cout<<i<<" ";
	}
	return 0; 
}
