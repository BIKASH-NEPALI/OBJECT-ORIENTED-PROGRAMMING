// Declare an array of 15 integers such that all the elemnts are assigned to 0 and then assign 10 to first 
// element and 150 to last element.
#include<iostream>
using namespace std;
int main(){
    int arr[15]={0}; // Declare all elements to 0
    int n=15;
    arr[0]=10;
    arr[14]=150;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
 return 0;
}