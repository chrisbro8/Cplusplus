//building factorial
#include<iostream>
using namespace std;
int main()
{
	int num,factorial=1;
	cout<<"Number";
	cin>>num;
	for(int i=1;i<=num;i++){
		factorial=factorial*i;
	
	}
	cout<<num<<"!="<<factorial;
	
	}
