#include<iostream>
using namespace std;
int main () {
	int m,sum=0,day=0;
	cin>>m;
	for(int i=1;;i++){
		for(int j=1;j<=1;j++){
			sum+=i;
			day++;
			if(day==m){
				cout<<sum;
				return 0;
			}
		}
	}
	return 0;
}
