// function with return type and arguments
#include<iostream>
using namespace std;
int multiply(int x , int y ); // function declaration, prototype
int main() {
    int x, y, multiplication;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;
     multiplication=multiply(x, y); // function call
    cout<<"The result of product is:"<<multiplication<<endl;
    return 0;
}
int multiply(int a, int b){ // function definition
    int result;
     result=a*b;
   
     return result;
}
