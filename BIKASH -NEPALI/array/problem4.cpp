// Arranging elements of an array in ascending order 
#include<iostream>
using namespace std;
int main() {
    int array[5], n, temp=0;
    n=5;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<5; i++){
        cin>>array[i];
    }
    for(int i=0; i<5; i++){
        for(int j=1+i; j<5; j++){
            if(array[j]<array[i]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<5; i++){
        cout<<array[i]<<endl;
    }

    return 0;
}