//10. Write a C++ program to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<cmath>//for pow()
using namespace std;
int main()
{
	//intro of the var
	float pRin,rATe,tIme,aMt,iNt;
	//input of values
	cout<<"Enter the Principal amount "<<endl;
	cin>>pRin;
	cout<<"Enter the rate of interest"<<endl;
	cin>>rATe;
	cout<<"Enter the time period"<<endl;
	cin>>tIme;
	aMt=pRin*(pow((1+rATe),tIme));//working formula
	iNt=aMt-pRin;
	cout<<"your interest is "<<iNt<<endl;
	cout<<"your amount is "<<aMt<<endl;
	return 0;
}
