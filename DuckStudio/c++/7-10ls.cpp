#include<iostream>
using namespace std;
int main () {
	long long q,n,flag=1;
	cin>>q;
	while(q--){
		cin>>n;
		if(n==1){
			cout<<"No"<<endl;
			continue;
		}
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				flag=0;
				break;
			}
		}
		if(flag) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	return 0;
}
