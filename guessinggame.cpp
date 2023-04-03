#include<iostream>
#include<stdlib.h>
using namespace std;
	int main()
	{
		int secretnum=7;
		int guess;
		int guesslimit=3;
		int guesscount=0;
		bool outofguesses=false
		system("cls");

		while(secretnum !=guess  && !outofguesses)
		{   if (guesscount<guesslimit){

			cout<<"Enter guess:";
			cin>>guess;
			guesscount++;
		} else{
			outofguesses= true;
		}
	}
		if(outofguesses){
		cout<<"You win";
		}
		else{
			cout<<"you lose";
		}
	}

