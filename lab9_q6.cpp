

//definig the library
#include <iostream>

using namespace std;
//the main function 

int main()
{
//declaring array
	char me[6]={'t','i','t','h','i','\0'};
	
	
//using index method
cout<<"myself"<<endl;

//using the for loop
	for(int n=0;n<6;n++)
		cout <<me[n];
//using pointers method

cout<<"tithi"<<endl;
//getting my name	
	for(int n=0;n<6;n++) 
	cout<<*(me+n);
return 0;	
}
