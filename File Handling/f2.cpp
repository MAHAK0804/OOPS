#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //write data into file
    ofstream write_data;
    write_data.open("a.txt");
    string name;
    cin>>name;
    write_data<<name;
    write_data.close();
    cout<<"Data is sucessfully written";
    ifstream read_data;
    read_data.open("a.txt");
    read_data>>name;
    cout<<"name is:-"<<name;
    read_data.close();
    return 0;


}
