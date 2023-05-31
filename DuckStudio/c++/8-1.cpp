#include<iostream>
using namespace std;
int main () {
	long long n;
	cin>>n;
	long long shuzhu[n];
	long long a;
	for (long long j=1;j<n;j++) {
		cin >> a;
		shuzhu[j] = a;
	}
	n-=1;
	for (;n>1;n--) {
		//while
		cout << shuzhu[n];
	}
	return 0;
} 
