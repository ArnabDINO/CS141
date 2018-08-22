//4. Write a C++ program to convert days into years, weeks and days. 

#include<iostream>

using namespace std;

int main()
{
	int dAy,yEAr,wEEk,rdAy;//declaration of the variables
	cout<<"enter the number of days "<<endl;//demanding the number
	cin>>dAy;//input of the values
	yEAr=dAy/365;//working formulae
	wEEk=(dAy%365)/7;//  "
	rdAy=((dAy%365)%7);// "
	cout<<"there is "<<yEAr<<" years "<<wEEk<<" weeks and "<<rdAy<<" days"<<endl;//output 
	return 0;
}
