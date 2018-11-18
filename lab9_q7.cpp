//including the library
#include <iostream>
using namespace std;
int main()
{
    char tithi[11];
	 char* charptr;
    cout<<"Enter 10 characters of string"<<endl;
    cin>>tithi;
    charptr=&tithi[0];
//using the for loop
    for(int i=0;i<=10;i++)
   {
    	for(int j=i;j<=10;j++)
    	{
            cout<<*(charptr+j);
    	}
      cout<<endl;
    }
//returning the main function
    return 0;
}
