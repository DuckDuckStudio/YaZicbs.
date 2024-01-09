#include<iostream>
using namespace std;
int main () {
	int n,k,sum=0,year=1;
	double K,fj=200;
	cin>>n>>k;
	K=(k+100)/100.0;
	sum+=n;
	while(1){
		if(sum>=fj){
			cout<<year;
			break;
		}
		year++;
		if(year>20){
			cout<<"Impossible";
			return 0;
		}
		sum+=n;
		fj*=K;
	}
	return 0;
}
