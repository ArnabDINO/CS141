//6. Write a C++ program to enter base and height of a triangle and find its area. 
#include<iostream>

using namespace std;

int main()
{
	float hEight,bAse,aRea;//intro of var
	cout<<"Enter the height"<<endl;
	cin>>hEight;
	cout<<"Enter the length of base"<<endl;
	cin>>bAse;
	aRea=0.5*(hEight*bAse);//formula
	cout<<"the area is "<<aRea<<endl;
	return 0;
}
