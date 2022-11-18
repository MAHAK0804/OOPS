#include<iostream>
using namespace std;
class abc
{
    int x,y,s1,s2;
    public:
    abc()
    {
       x=30;
       y=20;
    }
    abc operator +(abc b)
    { 
       abc c;
       c.x=b.x+ x;
       c.y=b.y+ y;
       return c;
    }
    int display()
    {
       cout<< "value of sum of x is"<<x;
       cout<< "value of sum of y is"<<y;
    }
};
int main()
{
   abc b1,b,b3,c;
   b3=b1+b;
   b3.display();
}