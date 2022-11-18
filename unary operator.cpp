#include<iostream>
using namespace std;
class abc
{
    int x,y;
    public:
    abc()
    {
       x=30;
       y=20;
    }
    void operator -()
    {
       x=-x;
       y=-y;
    }
    int display()
    {
       cout<< "value of x is"<<x;
       cout<< "value of y is"<<y;
    }
};
int main()
{
   abc b;
   b.display();
   -b;
   b.display();
}