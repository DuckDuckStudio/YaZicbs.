#include<bits/stdc++.h>
using namespace std;
/*
给定一个长度为n的序列{an}，
请你求出该序列中所有比x大的数量和它们的和。
*/
int main () {
    long long n,a,max=0,xin=0;
    //n循环数,max为最大值,xin为最小值 ,a为本次数
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
