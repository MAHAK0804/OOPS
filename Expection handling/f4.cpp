#include<iostream>
using namespace std;
int main()
{
    int value;
    try
    {
        cout<<"Enter a value"<<endl;
        cin>>value;
        throw value;
    }
    catch(int x)
    {
        cout<<"expection is caught integer number is"<<x;
    }
    
}
