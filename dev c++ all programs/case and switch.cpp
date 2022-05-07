#include<iostream>
using namespace std;
int main(){
	int n1,n2;
		cout<<"enter 2 numbers:";
	cin>>n1>>n2;
	char op;
  cout<<"enter the operand:";
  cin>>op;
  
  switch (op)
  {
  	case'+':
  		cout<<n1+n1<<endl;
 break;
  
	case'-':
	cout<<n1-n2<<endl;
	break;

case '*':
	cout<<n1*n2<<endl;
	break;
	
	case'/':
		cout<<n1/n2<<endl;
		break;
		

default:
	cout<<"operator not found!"<<endl;
	break;
}

	return 0;
}
