#include<iostream>
//输入输出
using namespace std;
/*
*/ 
int main () {
	int n,m=1;//n行,m列
	double temp,money,a=0;
	cin>>n;
	//cout<<endl;
	for(;n>0;n--){
        for(;m<=n;m++){
        	for(int t=m;t>0;t--){
        		cout<<"*";
			}
			cout<<endl;
        }
    }
    return 0; 
}
