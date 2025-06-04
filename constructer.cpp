#include<iostream>
using namespace std;
class Car{
    public:
    string Brand;
    string Model;
    int launch_year;
    

    
    Car(string a, string b, int c){ //parameterized constructor
        Brand=a;
        Model=b;
        launch_year=c;
    }
     private:
    int price;
    int number_plate;

};
class Bike{
    public:
    string Brand;
    string Model;
    int launch_year; 
    Bike(string a, string b){
        Brand=a;
        Model=b;
        launch_year=2020;
    }
    private:
    int price;
    int number_plate;
    
};
    
   
    
int main(){
    Car c1("Mercedes", "Benz", 2025);
    Car c2("BMW", "X5", 2023);
    Bike c3("Yamaha","FZ");
    Bike c4("Honda","CBR");
    cout<<"Car1 Brand:"<<c1.Brand<<endl;
    cout<<"Car2 Brand:"<<c2.Brand<<endl;
    cout<<"Bike1 Brand:"<<c3.Brand<<endl;
    cout<<"Bike2 Brand:"<<c4.Brand<<endl;
    cout<<"Launc date:"<<c3.launch_year<<endl;
    cout<<"Launc date:"<<c4.launch_year<<endl;
    return 0;
}