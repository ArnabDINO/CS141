//2. Write a C++ program to enter temperature in Celsius and convert it into Fahrenheit. 

#include <iostream>

using namespace std;

int main()
{
	float cEl,fAr;//introducing variables for temperature
	cout<<"enter the temperature in Celsius "<<endl;//output demanding the input
	cin>>cEl;//taking input
	fAr=((cEl/100)*180)+32;//working formula
	cout<<"the temperature in Fahrenheit is "<<fAr;//output
	return 0;
}
