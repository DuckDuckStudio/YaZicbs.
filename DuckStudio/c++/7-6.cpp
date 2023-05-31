#include<iostream>
using namespace std;
int main () {
	int n,sum;
	cin>>n;
    for(int i=1;i<=n;i++){
    	int m=i;
		sum=0;
    	while (m!=0) {
    		sum+=m%10;
    		m/=10;	
		}
		if (sum == 18){
			cout<<i<<" "; 
		}
    }
    return 0; 
}
