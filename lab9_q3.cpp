// define the library
#include <iostream>
using namespace std;

//main functions 
int main(){

//declaring the variables and the pointers
int integer,*i;
char character,*c;
float floating,*f;
double doubling,*d;
bool boolean,*b;
	//defining the variables 
	integer= 9;
	character='k';
	floating= 98.56;
	doubling= 8.897650;
	boolean = 1;
		// declaring all the pointers
		i=&integer;
		c=&character;
		f=&floating;
		d=&doubling;
		b=&boolean;
	//printing the values
	cout<<" size of character variable is "<<sizeof(character)<<" & it's pointer is "<<sizeof(c) <<endl ;
	cout<<" size of integer variable is "<<sizeof(integer)<<" & it's pointer is "<<sizeof(i) <<endl;
	cout<<" size of float point variable is " <<sizeof(floating)<<" & it's pointer "<<sizeof(f) <<endl;
	cout<<" size of double variable is "<<sizeof(doubling)<<" & it's pointer is "<<sizeof(d) <<endl;
	cout<<" size of bool variable is "<<sizeof(boolean)<<" & it's pointer is "<<sizeof(b) <<endl;

return 0;
}
