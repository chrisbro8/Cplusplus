#include<iostream>
using namespace std;
int main()
{
     string yes,no,book1,a;
     int choice, wallet=5000,seng;
     int ans1,ans2;
     cout<<"Welcome to Babcock Shopping mall"<<endl;
     cout<<"Answer the following questions with 1 or 0 "<<endl;
     cout<<"Are you wearing a face mask?";
     cin>>ans1;
     cout<<"Do you have your ID on?";
     cin>>ans2;
     if(ans1==1&& ans2==0){
        cout<<"There are four sections of the shopping mall";
        cout<<"1 FOR BARBING SALON"<<endl;
         cout<<"2 FOR RESTUARANT"<<endl;
          cout<<"3 FOR BOOK SHOP"<<endl;
           cout<<"4 FOR CLOTHING STORE\n"<<endl;
        cin>>choice;
        switch(choice){
        case 1:{
        cout<<"Welcome to the BARBING SALON";
        break;
        }
        case 2:{
        cout<<"Welcome to the RESTURANT";
        break;
        }
        case 3:{
        cout<<"Welcome to the BOOK SHOP";
        break;
        }
        case 4:{
        cout<<"Welcome to the CLOTHING STORE";
        break;
        }
         default:{
            cout<<"wrong input";
        }
    }
    
      cout<<"The total amount you have is  " <<wallet<<endl;
      while(wallet>0){
	  if(choice==3)
      {
      	cout<<"Choose between the set of listed items\"a)SENG BOOK=2000    \"b)C PROGRAM    \"c)C++ BOOK"<<endl; 
      	 cin>>book1;
      	if(book1==a){
      		system("CLS");
      		seng++;
      		wallet=wallet-2000;
		  }
	  }
}

    }

//else{
//	cout<<"Kindly go get it";
//}
      
      return 0;



}


