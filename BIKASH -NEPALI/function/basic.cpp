// Function with no return type and no arguments.
#include<iostream>
using namespace std;

 //void sum() // function definition without return type and parameter
//{ 
   // int a, b, sum=0;
   // cout<<"Enter two numbers:"<<endl;
   // cin>>a>>b;
   // sum=a+b;
   // cout<<"The sum of two numbers is:"<<sum<<endl;

 //}
 // function declaration
   void sum(); 
int main() {
   
    sum();
    return 0;
} 
void sum() 
{  
    int a, b, sum=0;
     cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    sum=a+b;
   
 
    cout<<"The sum of two numbers is:"<<sum<<endl;
}