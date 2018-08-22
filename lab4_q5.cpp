//5. Write a C++ program to enter two angles of a triangle and find the third angle. 

#include <iostream>

using namespace std;

int main()
{
	float a,b,c;//introduction for variable
	cout<<"Enter the first angle"<<endl;
	cin>>a;
	cout<<"Enter the second angle"<<endl;
	cin>>b;
	//checking if the values are valid or not
	if((a+b)>=180)
	{
		cout<<"Input invalid for plane triangle"<<endl;
	}
	else
	{
		c=180-(a+b);
		cout<<"the third angle is "<<c<<endl;
	}
	return 0;
}
