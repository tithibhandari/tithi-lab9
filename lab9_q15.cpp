
//define the library
#include<iostream>
//the library for the strings 
#include<cstring>
using namespace std;
string contains(char arr[], char x )
	{
		char * poi = arr;
		int counter= 0;
		string c= "true", d= "false";
//using the loop
		for(; *poi != '\0'; poi++)
			{
				counter ++;
//conditions 
				if (*poi == x)
//break the condition 
				break;
			}
		if (counter == 9)
		return d;
		else return c;
      }
//the main function 
int main ()
	{
		char x;
		char arr[]= {"akash"};
		cout << " letter of my name"<<endl;
		cin >> x;
		cout<< contains(arr , x )<< endl;
		return 0;
		
}
