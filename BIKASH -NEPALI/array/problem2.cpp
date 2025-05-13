// Write a program to read two array of 5 integers and find their sum , store it in a third array and print .
#include<iostream>
using namespace std;
int main() {
    int arr1[5], arr2[5], arr3[5];
    cout<<"Enter The elements of first array:"<<endl;
    for(int i=0; i<5; i++){ 
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array:"<<endl;
    for(int i=0; i<5; i++){
        
        cin>>arr2[i];
    }
    for(int i=0; i<5; i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    cout<<"The sum of arra1 and array2 is:"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr3[i]<<endl;
    }
        
    return 0;
}