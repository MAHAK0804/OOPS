***************VIRTUAL FUNCTION**************************
#include<iostream>
using namespace std;
class student
{
   public:
   int m[7];
   string n[8],s[9];
};
class marks:virtual public student
{
   int i;
   public:
   int getdata()
   {
      cout<<"enter marks"<<endl;
      for(i=0;i<5;i++)
      {
         cin>>m[i];
      }
      
   }
   int display()
   {
      for(i=0;i<5;i++)
      {
      cout<<m[i]<<endl;
      }
   }
};
class subject:virtual public student
{
   int i;
   public:
   int info()
   {
      cout<<"enter name"<<endl;
       for(i=0;i<5;i++)
      {
        cin>>n[i];
      }
      cout<<"enter subject"<<endl;
      for(i=0;i<5;i++)
      {
        cin>>s[i];
      }
   }
   int putdata()
   {
      for(i=0;i<5;i++)
      {
         cout<<n[i]<<"  "<<s[i];
      }
   }
};
class result:public marks,public subject
{
   int i;
   public:
   int putdata()
   {
      for(i=0;i<5;i++)
      {
         cout<<n[i]<<"  "<<s[i]<<"  "<<m[i]<<endl;
      }
   }
};
int main()
{
   result S;
   subject*ptr1;
   S.getdata();
   S.info();
   S.putdata();
   S.display();
   ptr1= &S;
   ptr1->putdata();
   
}
