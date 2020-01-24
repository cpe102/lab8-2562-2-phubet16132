#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	
		float pb ,in,tt,pm,nb,rate;
		int year=1;
		
		cout<<"Enter initial loan: ";
		cin>>pb;
		cout<<"Enter interest rate per year (%): ";
		cin>>rate;
		cout<<"Enter amount you can pay per year: ";
		cin>>pm;
		
	
		
		//use 'setw' to set width of table and 'left' to set left-alignment
		//you can change input argument of 'setw()' to see the effect
		//Try to change from 'left' to 'right' and see the effect
		cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";
	do{	
		//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
		//you can change input argument of 'setprecision()' to see the effect
	
		
		in=(pb*rate)/100;
		
		tt=pb+in;
		
		if(tt>=pm){
			nb=tt-pm;
		}
		else{
			
			pm=tt;
			nb=tt-pm;
			
		}
		
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << pb;
		cout << setw(13) << left << in;
		cout << setw(13) << left << tt;
		cout << setw(13) << left << pm;
		cout << setw(13) << left << nb;
		cout << "\n";	
		
		pb=nb;
		year=year+1;
}while(nb>0 );
	return 0;
}
