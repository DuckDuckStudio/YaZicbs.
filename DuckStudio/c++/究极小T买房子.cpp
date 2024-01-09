#include<iostream>
#include<iomanip>
using namespace std;
/*
要求：
年薪N万
现在价格是 200 万
房子价格以每年百分之 K 增长
第几年能够买下这套房子
*/ 
//lz:   n=50,k=10  cout<<8
int main () {
	int n,year=0,money=0;
	double fj=200,k;
	cin>>n,k;
	k=k*0.01;//k=0.1
	for(double temp;money<fj;){
		money+=n;
		year+=1;
		temp=fj*k;
		fj+=temp;
	} 
	/*day   money  fj
	  1      50    200
	  2      100   220
	  3      150   242
	  4      200   266.2
	*/
	if(year<=20){
		cout<<year;
	}else{
		cout<<"Impossible";
		//That is impossible!!! Noooo!!! 
	}
	cout<<endl;
	//system("pause");
	return 0;
}
