#include<iostream>
using namespace std;

int main()
{
    //a normal integer value
    int var = 10;

    //A pointer variable that holds address of var
    int *ptr= &var;

    //This line prints value at address stored in ptr
    cout<<"Value of var= "<< *ptr <<endl;

    //The output of this line maybe different in different run even in the make machine
    cout<< "Address of var= "<<ptr<<endl;

    *ptr = 20;
    cout<< "After doing *ptr =20, *ptr is "<<*ptr<<endl;
    return 0;


}