
//definig the library
#include<iostream>
//definig the library for string 
#include<cstring>
using namespace std;
//the main function 
int main(){

cout<<" string of character is tithi"<<endl;
char str[11]="tithi";

cout<<" reverse is "<<endl;



for(int i=10;i>-1;i--){
char*ptr= &str[i];


cout<<*ptr;
ptr--;

}
cout<<endl;
}
