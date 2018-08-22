//9. Write a C++ program to enter P, T, R and calculate Simple Interest. 
#include<iostream>
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
	iNt=pRin*rATe*tIme;//formula
	aMt=pRin+iNt;
	cout<<"your interest is "<<iNt<<endl;
	cout<<"your amount is "<<aMt<<endl;
	return 0;
}
