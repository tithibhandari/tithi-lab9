//including the library 

#include <iostream>
using namespace std;
//main function 
int main(){
	char str[11],*p;
	cout<<"Enter an input of 10 characters as string"<<endl;
	cin>>str;
	p=str;
	// Pointer variable refers to address of string
	for(int i=0;i<10;i++){
		for(int j=9-i;j<11;j++){
		cout<<*(p+j);
		}
	cout<<endl;
	}
//returning the main function
	return 0;
}
