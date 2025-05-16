#include<iostream>  
using namespace std;
 int modify(int);
 int main() {
    int a, result;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<"The value of a before calling the function is:"<<a<<endl;
    result =modify(a); // pass by value
    cout<<"The value of a after calling the function is:"<<a<<endl;
 }
 int modify(int a){
    a=10;
  
    return a;
 }