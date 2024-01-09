#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
/*
要求：
一条短信资费为0.1元，
限定一条短信的内容在70个字以内（包括70个字）
input(n)-总次数
input[a1,a2,a3...an]
-每次短信字数 
*/ 
int main () {
	//W:A xin a<=70 0.1yuan
	long long n;
	double temp,money,a=0;
	cin>>n;
	for(;n>0;n--){
		cin>>a;
		if(a>70){
			temp = a/70;
			//向上取整temp
			//cout<<"DB:本次短信可分为"<<temp<<"条短信"<<endl; 
			temp = ceil(temp);
			//cout<<"DB:向上取整为:"<<temp<<endl;
		}else if(a<=70 && a>0){
			temp=1;
			//cout<<"DB:字数小于70,算1条"<<endl;
		}else{
			cout<<"Error:The input value does not follow the rules";
		}
		money=money+temp*0.1; 
		//cout<<"DB:现在所花钱数:"<<money<<"短信数:"<<temp<<endl;
	}
	//cout<<"DB:现在的钱数："<<money<<endl;
	cout<<fixed<<setprecision(1)<<money;
	return 0; 
} 
