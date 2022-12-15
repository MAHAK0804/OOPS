#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ifstream fin;
    fin.open("a.txt");
    getline(fin,name);
    fin.close();
    ofstream fout;
    fout.open("c.txt");
    fout<<name;
    fout.close();
    cout<<"Data is successfully written";
}