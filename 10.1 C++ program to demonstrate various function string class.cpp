#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    //various constructor od string class
    //initialization by raw string
    string str1("first string");

    //initialization by another string
    string str2(str1);

    //initialization by character with number of occurance
    string str3(5, '#');

    //initialization by part of another string
    string str4(str1, 6, 6);

    //initialization by part of another string
    string str5(str1.begin(), str1.begin()+5);

    cout<< str1<<endl;
    cout<< str2<<endl;
    cout<< str3<<endl;
    cout<< str4<<endl;
    cout<< str5<<endl;

    //assignment operator
    string str6 = str4;
    //clear function deletes all character from string
    str4.clear();

    //both size() and lenght() return length of string and they work as synonyms
    int len = str6.length();
    cout<< "Length of string is: "<<len << endl;

    //particular character can be accessed using at/ [] operator
    char ch = str6.at(3); //same as "ch = str6[3];"
    cout<< "Third character of string is "<< ch <<endl;

    //front return first character and back return last character of string
    char ch_f = str6.front(); //same as ch_f= str6[0]
    char ch_b = str6.back(); // ch_b = str6[str6.length()-1]
    cout<< "First char is "<< ch_f <<" and last char is "<<ch_b<<endl;

    //append add the argument string at the end
    str6 +=" extension";
    //another wersion of appends, which apppends part of another string 
    str4.append(str6, 0, 6);
    cout<<str6<<endl;
    cout<<str4<<endl;

    //find returns index where pattern is found
    //if pattern is not there it ruterns predefined constant npos where value is -1
    if(str6.find(str4)!=string::npos)
    {
        cout<<"str4 found in str6 at "<< str6.find(str4)<< " pos"<<endl;
    }
    else
    {
        cout<<"str4 is not found in str6"<<endl;
    }

    //substr(a,b) function returns a substrind of b length from index a
    cout<<str6.substr(7,3)<<endl;
    //if second argument is not passed, string till ends taken as substring
    cout<<str6.substr(7)<<endl;

    //erase(a,b) deletes b character at index a
    str6.erase(7,4);
    cout<<str6<<endl;

    //character version of erase
    str6.erase(str6.begin()+5, str6.end()-3);
    cout<<str6<<endl;

    str6="This is a example";

    //replace(a,b,str) replaces b character from a index by str
    str6.replace(2,7,"ese are test");
    cout<<str6<<endl;
    return 0;
}