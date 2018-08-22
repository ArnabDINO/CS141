//8. Write a C++ program to enter marks of five subjects and calculate total, average and percentage.
#include <iostream>
using namespace std;

int main()
{
	float _1,_2,_3,_4,_5,sUm,aVg,pC,fUl;//intro to var
	cout<<"Enter fiull marks"<<endl;
	cin>>fUl;//input of fl mrks
	cout<<"marks in subject 1"<<endl;
	cin>>_1;
	cout<<"marks in subject 2"<<endl;
	cin>>_2;
	cout<<"marks in subject 3"<<endl;
	cin>>_3;
	cout<<"marks in subject 4"<<endl;
	cin>>_4;
	cout<<"marks in subject 5"<<endl;
	cin>>_5;
	sUm=_1+_2+_3+_4+_5;//working formula
	aVg=sUm/5;
	pC=(sUm/fUl)*100;
	cout<<"your result total marks is "<<sUm<<endl;
	cout<<"your result average is "<<aVg<<endl;
	cout<<"your result percentage is "<<pC<<"%"<<endl;
	return 0;
}
