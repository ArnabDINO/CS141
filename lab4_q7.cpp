//7. Write a C++ program to calculate area of an equilateral triangle. 

#include<iostream>
#include<cmath>//for sqrt() and pow()

using namespace std;

int main()
{
	float sIDe,aREa;//introducing variable
	cout<<"Enter the length of the side "<<endl;
	cin>>sIDe;
	aREa=(sqrt(3)/4)*(pow(sIDe,2));//working formula
	cout<<"the area is "<<aREa<<endl;
	return 0;
}
