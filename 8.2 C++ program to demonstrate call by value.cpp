#include<iostream>
using namespace std;

//call by value
void fun(int x)
{
    x = 30;
}

int main()
{
    int x=20;
    fun(x); //passing value only
    cout<<"value of x: "<< x; 
    return 0; 
}