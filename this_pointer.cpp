#include<iostream>
using namespace std;
class Planet{
    public: 
    string Name;
    string colour;
    int distance;
    Planet(string Name, string colour, int distance){
      this->  Name=Name; // this "pointer " refers to the variable of the object that is being created
       this-> colour=colour;
       this-> distance=distance;
    }
    public:
    int discovery_year;

};
int main() {
    Planet P1("Earth", "Blue", 2000);
    cout<<"Planet Name:"<<P1.Name<<endl;

    return 0;
}