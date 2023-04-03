#include<iostream>
#define tax()(0.005*salary)
#define payee()(tax()+tax()+tax())
#define tithe()(0.1*fee)
#define grosspay()(salary+fee+allowance)
#define netpay()(tax()+payee()+tithe())
using namespace std;
int main()
{
       string bank,name,i_d,rank;
       float salary=0,fee,allowance;
      cout<<"A quick draft of system management of staff income"<<endl;
      cout<<"You would be deducted #10 before you can print out your bank draft "<<endl;
        cout<<"What is your Staff name:";
        getline(cin,name);
        cout<<"What is the name of your bank:";
        getline(cin,bank);
        cout<<"What is your Staff ID:";
        getline(cin,i_d);
        cout<<"What is your Rank:";
        getline(cin,rank);
        cout<<"Input the amount of your Basic Salary:#";
        cin>>salary;
        salary=salary-10;
        cout<<"Input your Enhancement Fee:#";
        cin>>fee;
        cout<<"Input your House Allowance:#";
        cin>>allowance;
        
         if(salary>20 && fee>20&& allowance>20) 
         {
         	
         	
         	cout<<"This is your bank draft reciept below  :"<<endl;
         	cout<<"\t\t\t\t\t"<<bank<<endl;
         	cout<<"Staff Name:"<<name<<"\t\t\t\t\t\t\t\t"<<"Staff ID:"<<i_d<<endl;
         	cout<<"Rank:"<<rank<<endl;
         	cout<<"\n\n";
         	cout<<"Addition\t\t\t\t\t\t\t\t\tDeduction"<<endl;
         	cout<<"Basic salary:#"<<salary<<"\t\t\t\t\t\t\t\t"<<"Tithe:#"<<tithe()<<endl;
         	cout<<"Enhancement:#"<<fee<<"\t\t\t\t\t\t\t\t"<<"Tax:#"<<tax()<<endl;
       		cout<<"House Allowance:#"<<allowance<<"\t\t\t\t\t\t\t\t"<<"Payee:#"<<payee()<<endl;
       		cout<<"\n\n";
       		cout<<"Gross pay:#"<<grosspay()<<"\t\t\t\t\t\t\t\t"<<"Netpay:#"<<netpay()<<endl;
         	
		 }
		 else
		 {
		 	cout<<"\n\n\n";
		 	cout<<"\t\t\t\tInsufficent Balance to print a bank draft!!!!";
		 }
        
}
