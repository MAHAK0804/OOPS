#include<iostream>
using namespace std;
int main()
{
    int salary,HDR,DA,sum;
    try
    {
        cout<<"enter employee salary";
        cin>>salary>>HDR>>DA;
        sum= salary+HDR+DA;
        if(sum<=0||sum>200000)
        {
            throw sum;
        }else{
            cout<<"sum is:-"<<sum;
        }
    }
    catch(int x)
    {
       if(x<=0)
       {
        cout<<"expection is caught !! salary is less than 0"<<endl;
       }else if(x>200000)
       {
        cout<<"expection is caught!! salary is greater than 200000"<<endl;
       }
    }
    
}