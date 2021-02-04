#include<iostream>
using namespace std;

void findelement(int arr[], int size, int key)
{
    // Loop to traverse array and search for key
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            cout<< "Element was found at position: "<< (i+1);
            break;
        }
    }
}

int main()
{
    int arr[]= {1, 2, 3, 4, 5};
    int n=5;
    int key = 3;
    findelement(arr, n, key);
    return 0;


}