#include<iostream>
using namespace std;
int main () {
	long long q,m=1;
	long long t=2;
	bool isPrime=false;
	cin>>q;
	//cout<<endl;
	for(;q>0;q--){
		cin>>m;
		for (;t<m;t++){
			if (m%t==0) {
				isPrime=true;
				break;
			}
			//cout<<endl<<"DB:"<<t<<" "<<m%t<<endl;
		}
		t=2;
		if (isPrime) {
			cout<<"No";
		}else{
			cout<<"Yes";
		}
		cout<<endl;
		isPrime=false;
    }
    return 0; 
}
