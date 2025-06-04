#include<iostream>
using namespace std;
#include<string>
int main() {
    string s=" Hello bikash";
    cout<<"Hi"<<s<<endl;
    cout<<"What is your name?"<<endl;
    string name;
    cin>>name;
    cout<<"your name is:"<<name<<endl;
    string fullname;
    cout<<"what is your full name"<<endl;
    cin.ignore();
    getline(cin, fullname);
    cout<<"your full name is:"<<fullname<<endl;
   return 0;
}