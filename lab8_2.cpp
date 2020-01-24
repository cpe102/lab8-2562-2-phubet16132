#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N,int M){
	int in=1,im=1;
	if(N<=0 or M<=0){
		cout<<"Invalid input";
	}
	while(in<=N){
		while(im<=M){
			cout<<"o";
			im+=1;
		}
		cout<<endl;
		in+=1;
		im=1;
	}
	
}
		
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
