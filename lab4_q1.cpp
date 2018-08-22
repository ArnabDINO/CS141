//1. Write a C++ program to enter length in centimeter and convert it into meter and kilometer. 

#include<iostream>

using namespace std;

int main()

{
	//introduce the variables one each for lengths in c.m. ,m.,&k.m..
	float centiL,meterL,kiloL;
	//input the length
	cout<<"enter the length in centimeter "<<endl;
	cin>>centiL;
	meterL=centiL/100;//calculation for meter
	kiloL=meterL/1000;//calculation for kilometer
	cout<<"the length in meter is "<<meterL<<"meter"<<endl;//output
	cout<<"the length in kilometer is "<<kiloL<<"kilometer"<<endl;//output
	return 0;
}
