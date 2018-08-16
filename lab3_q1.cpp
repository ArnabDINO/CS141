//including the library
#include <iostream>
//the namespace named std is being used (?)
using namespace std;
//initialisation of function main 
int main()
{
//introducing the variables
	int INT;
	float FLOAT;
	char CHAR;
	double DOUBLE;
	wchar_t WIDECHAR;
	bool BOOL;
	cout << "value of int"<< INT<< endl;
	cout << "value of char '"<< CHAR<< "'"<<endl;
	cout << "value of float"<< FLOAT<< endl;
	cout << "value of double"<< DOUBLE<< endl;
	cout << "value of wchar_t"<< WIDECHAR<< endl;
	cout << "value of bool"<< BOOL<< endl;
//finding the size
	cout << "size of int"<< sizeof(INT)<< endl;
	cout << "size of char"<< sizeof(CHAR)<< endl;
	cout << "size of float"<< sizeof(FLOAT)<< endl;
	cout << "size of double"<< sizeof(DOUBLE)<< endl;
	cout << "size of wchar_t"<< sizeof(WIDECHAR)<< endl;
	cout << "size of bool"<< sizeof(BOOL)<< endl;
/*assignment of the values to the variables
i dont know hoe to assign value to wide character*/
INT =1;
FLOAT=2.0;
CHAR = 'a';
DOUBLE=1.003;
BOOL=0;
	cout << "value of int"<< INT<< endl;
	cout << "value of char"<< CHAR<< endl;
	cout << "value of float"<< FLOAT<< endl;
	cout << "value of double"<< DOUBLE<< endl;
	cout << "value of wchar_t"<< WIDECHAR<< endl;
	cout << "value of bool"<< BOOL<< endl;
//finding the size
	cout << "size of int"<< sizeof(INT)<< endl;
	cout << "size of char"<< sizeof(CHAR)<< endl;
	cout << "size of float"<< sizeof(FLOAT)<< endl;
	cout << "size of double"<< sizeof(DOUBLE)<< endl;
	cout << "size of wchar_t"<< sizeof(WIDECHAR)<< endl;
	cout << "size of bool"<< sizeof(BOOL)<< endl;
return 0;
}

