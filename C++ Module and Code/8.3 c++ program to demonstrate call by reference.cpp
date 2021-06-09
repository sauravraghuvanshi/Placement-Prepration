#include<iostream>
using namespace std;

//call by reference
void fun(int *ptr)
{
    *ptr = 30;
}

int main()
{
    int x=20;
    fun(&x); //passing reference of x
    cout<<"value of x: "<< x; //value will get change
    return 0;
}