#include <iostream>

using namespace std;
int main(){
int num1=20;
int num2=30;
cout<<"number 1:"<<num1<<endl;
cout<<"number 2:"<<num2<<endl;
//logic to swap numbers
/*int temp = num 1;
num1=num2;
num2=temp;
*/
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout<<"number 1:"<<num1<<endl;
cout<<"number 2:"<<num2<<endl;
	return 0;
}
