//introducing library iostream
#include <iostream>
//stating the namespace
using namespace std;
//initialising the main function
int main()
{
//introducing the variables
int a,b,sUm,dIf,pRod,qUo,rEm;
float fa,fb,fsUm,fdIf,fpRod,fqUo,frEm;
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
//mathematical operations are below
sUm=a+b;//addition
dIf=a-b;//substraction
pRod=a*b;//multiplication
qUo=a/b;//division
rEm=a%b;//remainder (modulo function)
cout<<"the sum is "<<sUm<<endl;
cout<<"the difference is "<<dIf<<endl;
cout<<"the product is "<<pRod<<endl;
cout<<"the quotient is "<<qUo<<endl;
cout<<"the remainder is "<<rEm<<endl;
fa=a;
fb=b;
fsUm=fa+fb;//addition for float
fdIf=fa-fb;//substraction for float
fpRod=fa*fb;//multiplication for float
fqUo=fa/fb;//division for float
/*frEm=fa%fb;//remainder (modulo function) for float is not defined*/
cout<<"the sum for float is "<<fsUm<<endl;
cout<<"the difference for float is "<<fdIf<<endl;
cout<<"the product for float is "<<fpRod<<endl;
cout<<"the quotient for float is "<<fqUo<<endl;
return 0;//the program ends here
}
