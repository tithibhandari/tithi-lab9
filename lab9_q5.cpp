//including the library

#include<iostream>
using namespace std;

//main function
int main()
{
    //declaring array 
    int ak [10]={1,2,3,4,5,6,7,8,9,10};

    //pointer
    int *y;

    //1st case
    cout<<"Print the array  by normal index method"<<endl;

    //  using loop
    for(int i=0;i<10;i++){
    cout<<ak[i]<<" "<<endl;
    }
    
    //2nd case
    cout<<"Print the array by pointer method"<<endl;

    //pointing towards 
    y=ak;
    
    
    for(int i=0;i<10;i++){
    cout<<*y<<endl;
    y++;
    }
    
return 0;
}
