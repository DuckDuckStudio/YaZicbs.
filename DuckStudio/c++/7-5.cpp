#include<iostream>
using namespace std;
int main () {
	int n,m,i=1;
	cin>>n>>m;
    for(;i<=n;i++){
        for(int j=1;j<=m;j++){
        	if(i==1||i==n||j==1||j==m){
        		cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
    }
    return 0; 
}
