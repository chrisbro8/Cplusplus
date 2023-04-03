
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	
	char section ;
	int wallet = 10000 ;
	int seng = 0 , c=0,cpp=0 ;
	int choice ;
	int hair=0,hairp=0,hairdy=0;
	int drink=0,bread=0,pring=0;
	int rice=0 , bnf=0 ,sawa=0;
	 
	
	
	
	
	cout<<"Welcome to Babcock Shopping mall\n ";
	cout<< "enter : \n \"B \" for bookshop \t \" S \" for Salon \t \"M\" for Mall \t \"R \" for Restaurant \n";
 cin>> section;
	switch (section){
		case 'b':
		case 'B':
			
			
		cout<<"Welcome to the bookshop \n";
		while (wallet>=0){	
		cout<<"Choose between the listed items \n .\n (1.)Seng book = 2000 \t (2.)c programming = 1500 \t (3.)C++ = 1200\n \n";
	
		cout<< "chose at least one  ";
		cout<< "\n\n ";
		cin>>choice;
		if(choice==1){
			system("CLS");
			seng++;
			wallet = wallet - 2000;
			
		}
			if(choice==2){
				system("CLS");
			c++;
			wallet = wallet - 1500;
		}
			
				if(choice==3){
					system("CLS");
			cpp++;
			wallet = wallet - 1200;
			
		}
			if(choice==4){
			cout<<"\nthank you for shopping\n";
			
		}
			
			
			
		
			cout<<"| seng books :         | "<<seng<<  " | \n";
		
			cout<<"| c programming books :| "<<c<<     " |\n";
		  
			cout<<"| c++ book :           | "<<cpp<<   " |\n";
		
			cout<<"| your balance is $    | "<<wallet<<" |\n\n";
	     
			cout<<"| Type in 4 to exit\n  |              |";
			
			
			
		}
	break;
		case 's':
		case 'S':
			
			
			
		cout<<"Welcome to the Salon \n";
		while (wallet>=0){	
		cout<<"Choose between the listed items \n .\n (1.) Haircut = 500 \t (2.)Hair products= 1500 \t (3.) Hair dye = 1200\n \n";
	
		cout<< "chose at least one  ";
		cout<< "\n\n ";
		cin>>choice;
		if(choice==1){
			system("CLS");
			hair++;
			wallet = wallet - 500;
			
		}
			if(choice==2){
				system("CLS");
			hairp++;
			wallet = wallet - 1500;
		}
			
				if(choice==3){
					system("CLS");
			hairdy++;
			wallet = wallet - 1200;
			
		}
			if(choice==4){
				system("CLS");
			cout<<"\nthank you for shopping\n";
		
		cout<<"Type in 4 to exit\n";	
		}
			
			
			
		    
			cout<<"|haircut :             | " << hair<< "  | \n";
			
			cout<<"|hair products :       | "<< hairp<<"  | \n";
		
			cout<<"| hair dye :           | "<< hairdy<<"  |\n";
		
			cout<<"|your balance is $     | "<<wallet<< "  |\n\n";
		   
			
			
			
			
		}
	break;
		
		case 'M':
		case 'm':
			
			
			
		cout<<"Welcome to the shopping mall \n";
		while (wallet>=0){	
		cout<<"Choose between the listed items \n .\n (1.) Drink = 200 \t (2.)Bread = 400 \t (3.)Pringles = 1200\n \n";
	
		cout<< "chose at least one \n  Type in 4 to exit\n ";
		cout<< "\n\n ";
		cin>>choice;
		if(choice==1){
			system("CLS");
			drink++;
			wallet = wallet - 200;
			
		}
			if(choice==2){
				system("CLS");
		bread++;
			wallet = wallet - 400;
		}
			
				if(choice==3){
					system("CLS");
			pring++;
			wallet = wallet - 1200;
			
		}
			if(choice==4){
				system("CLS");
			cout<<"\nthank you for shopping\n";
			
		}
			
			
			
		
		   
			cout<<"|Drinks :         "<< drink<<"|              | \n";
		
			cout<<"|Bread :          "<< bread<<"|              |\n";
		
			cout<<"| Pringles :      "<< pring<<"|              |\n";
		
			cout<<"your balance is $ "<<wallet<<"|              |\n\n";
	
			
			
			
			
		}
		break;
		case 'r':
		case 'R':
			
			
		cout<<"Welcome to the Restaraunt \n";
		while (wallet>=0){	
		cout<<"Choose between the listed items \n .\n (1.)rice chicken = 2000 \t (2.)burger and fries = 1500 \t (3.)shawarma= 1200\n \n";
	
		cout<< "chose at least one  ";
		cout<< "\n\n ";
		cin>>choice;
		if(choice==1){
			system("CLS");
			rice++;
			wallet = wallet - 2000;
			
		}
			if(choice==2){
				system("CLS");
			bnf++;
			wallet = wallet - 1500;
		}
			
				if(choice==3){
					system("CLS");
			sawa++;
			wallet = wallet - 1200;
			
		}
			if(choice==4){
				system("CLS");
			cout<<"\n thank you for shopping\n";
			
		}
			
			
			
		
			cout<<"|Rice and Chicken :    |"<<rice<< "   |\n";
		    
			cout<<"|Burger and Fries :    |"<<bnf<<"     |\n";
		  
			cout<<"| Shawarma :           |"<<sawa<<"    |\n";
		
			cout<<"|your balance is $     |"<<wallet<< " |\n\n";
		
			cout<<"|Type in 4 to exit     |              |\n";
			
			
			
	
	
}
		
	
		}
	
cin.get();
	
return 0;	
}
