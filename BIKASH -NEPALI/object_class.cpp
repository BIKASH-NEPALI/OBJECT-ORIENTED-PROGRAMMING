#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public: // acces modifiers
    
 string name; // properties/attributes
 string departement;
 string subject;
 private:
  float salary;
  // methods(function inside a class)-member functions.
 void  changedepartement(string newdept){
    departement=newdept;
 }
};
 
 class Account{
    public:
    string account_holder;
    int  account_number;
    private:
    string password;
    float balance;


 };
  


int main(){
    Teacher t1;
    Account a1;
    t1.name="Harendra_raj";
    t1.departement="civil";
    t1.subject="maths";
   // t1.salary=50000.0;
    cout<<t1.name<<endl;
    a1.account_holder="Bikash";
    a1.account_number=123456;
    
    cout<<a1.account_holder<<endl;
    cout<<t1.departement<<endl;
    return 0;
}