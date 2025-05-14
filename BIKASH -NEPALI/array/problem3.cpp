#include<iostream>
using namespace std;
int main() {
    int array[5],n, temp=0;
    n=5;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<endl;
    }
    
    return 0;
}