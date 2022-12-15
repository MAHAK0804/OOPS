#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("a.txt");
    cout<<"Enter Item Name:-"<<endl;
    char name[30];
    cin.getline(name,30);
    fout<<name<<"\n";
    cout<<"Enter Item cost:-"<<endl;
    int cost;
    cin>>cost;
    fout<<cost<<"\n";
    fout.close();
    ifstream fread("m.txt");
    fread>>name;
    fread>>cost;
    cout<<"Name is:-"<<name<<endl;
    cout<<"cost is:-"<<cost<<endl;
    fread.close();
    return 0;
}