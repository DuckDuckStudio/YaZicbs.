#include<iostream>
using namespace std;
int main () {
	int n,m,t=1;
	cin>>n>>m;
    for(;t<=n;t++){
        for(int v=1;v<=m;v++){
        	cout<<"*";
		}
		cout<<endl;
    }
    return 0; 
}
