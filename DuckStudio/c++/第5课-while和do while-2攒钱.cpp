#include<bits/stdc++.h>
using namespace std;
/*
����һ������Ϊn������{an}��
������������������б�x������������ǵĺ͡�
*/
int main () {
    long long n,a,max=0,xin=0;
    //nѭ����,maxΪ���ֵ,xinΪ��Сֵ ,aΪ������
	cin>>n;
    while (n > 0) {
    	cin>>a;
    	if (a>max){
    		max = a;
		}else if (a<xin){
			xin= a;
		}
		n--;
	};
	cout<<max<<" "<<xin;
    return 0;
};
