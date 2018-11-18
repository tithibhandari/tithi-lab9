//define  the library
#include <iostream>
using namespace std;
//the main function
int main(){
	//integer variable
	int a =2,b=3;
//to print the value 
	int *p;
//to print the address
	p=&a;
	b=*p;
	//print a
	cout<<a<<endl;
	//print b
	cout<<b<<endl;
	//print p
	cout<<*p<<endl;
	a =2,b=3;
	//assigning pointer p to b
	p=&b;
	//print a
	cout<<a<<endl;
	//print b
	cout<<b<<endl;
	//print p
	cout<<*p<<endl;
return 0;
}
