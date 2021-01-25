#include <iostream>
using namespace std;
 
// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
    int l1 = 10, l2 = 5, area;
 
    area = AREA(l1, l2);
 
    cout << "Area of rectangle is: " << area;
 
    return 0;
}