#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vect{"geeksforgeeks practice", "geeksforgeeks write", "geeksforgeeks ide"};

    //we avoide copy of the whole string object by using references
    for(const auto &x : vect)
    cout<<x<<endl;
    return 0;
}