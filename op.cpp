#include<iostream>
using namespace std;
class opt
{
    int a;
    public:
    opt(int x=0)
    {
        a=x;
    }
    friend opt operator ++(opt);
    friend opt operator --(opt);
    void display()
    {
        cout<<"a:-"<<a<<endl;
    }
};
opt operator ++(opt B)
{
    opt C;
    C.a=++B.a;
    return C;
}
opt operator --(opt A)
{
    opt D;
    D.a=--A.a;
    return D;
}
int main()
{
    opt o1(10);
    opt o2(4);
    o1.display();
    o2.display();
    o1=++o1;
    cout<<"After Increment\n"<<endl;
    o1.display();
    o2=--o2;
    cout<<"After Decrement\n"<<endl;
    o2.display();
   

}