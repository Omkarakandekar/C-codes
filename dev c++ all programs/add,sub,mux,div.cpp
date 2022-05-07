#include<iostream>
using namespace std;
int main()
int num1,num2;
int op;
cout<<enter the 2 numbers<<endl;
cin>>num1>>num2;
cout<<"enter operand:";
cin>>op;

switch (op)
{
	case'+'
	cout<<num1+num2<<endl;
	break;
	
	case'-'
	cout<<num1-num2<<endl;
	break;
	
	case'*'
	cout<<num1*num2<<endl;
	break;
	
	case'/'
	cout<<num1/num2<<endl;
	break;
	
	default:
		cout<<"operator not found!"<<endl;
		break;
}
return 0;

