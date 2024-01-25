/*1. WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition*/

#include<iostream>
using namespace std;

class calculate{
	public :
	void division(int a,int b){
		cout<<"ANS :"<<a/b<<endl;
	}
	void subtraction(int x,int y,int z){
		cout<<"ANS :"<<x-y-z<<endl;
	}
};

class calculate1{
	public :
	void multiplication(int a,int b,int c,int d){
		cout<<"ANS :"<<a*b*c*d<<endl;
	}
	void addition(int e,int f,int g,int h,int i){
		cout<<"ANS :"<<e+f+g+h+i<<endl;
	}
};
int main(){
	calculate c1;
	calculate1 c2;
			c1.calculate::division(1,4);
			c1.calculate::subtraction(1,4,6);
			c2.multiplication(2,4,5,6);
			c2.addition(3,5,6,7,8);
}

