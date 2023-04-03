#include<iostream>
#include<windows.h>
using namespace std;
	int main()
	{
		double num1,num2;
		char op;
		cout<<"Enter first number:";
		cin>>num1;
	
		
		     	cout<<"Enter Operator:";
		     	cin>>op;
		
			cout<<"Enter second number:";
			
		cin>>num2;
		
		int result;
		
		if(op=='+'){
			result=num1+num2;
				system("CLS");
		}
		else if(op=='-'){
			result=num1-num2;
				system("CLS");
		}
		else if(op=='x'){
			result=num1*num2;
		}
		else if(op=='/'){
			result=num1/num2;
		}
			else
			{
				cout<<"invalid operator";
			}
			
			cout<<result;
			
		
}

