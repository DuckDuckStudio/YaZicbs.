#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
/*
Ҫ��
һ�������ʷ�Ϊ0.1Ԫ��
�޶�һ�����ŵ�������70�������ڣ�����70���֣�
input(n)-�ܴ���
input[a1,a2,a3...an]
-ÿ�ζ������� 
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
			//����ȡ��temp
			//cout<<"DB:���ζ��ſɷ�Ϊ"<<temp<<"������"<<endl; 
			temp = ceil(temp);
			//cout<<"DB:����ȡ��Ϊ:"<<temp<<endl;
		}else if(a<=70 && a>0){
			temp=1;
			//cout<<"DB:����С��70,��1��"<<endl;
		}else{
			cout<<"Error:The input value does not follow the rules";
		}
		money=money+temp*0.1; 
		//cout<<"DB:��������Ǯ��:"<<money<<"������:"<<temp<<endl;
	}
	//cout<<"DB:���ڵ�Ǯ����"<<money<<endl;
	cout<<fixed<<setprecision(1)<<money;
	return 0; 
} 
