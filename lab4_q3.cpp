//3. Write a C++ program to enter temperature in Fahrenheit and convert to Celsius 

#include <iostream>

using namespace std;

int main()
{
	float cEl,fAr;//introducing variables for temperature
	cout<<"enter the temperature in Fahrenheit "<<endl;//output demanding the input
	cin>>fAr;//taking input
	cEl=((fAr-32)/180)*100;//working formula
	cout<<"the temperature in Celsius is "<<cEl;//output
	return 0;
}
