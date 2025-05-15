// searching for an element in an array
#include<iostream>
using namespace std;
int  main() {
    int array[5], n, x;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for (int i=0; i<5; i++){
        cin>>array[i];
    }
    
    cout<<"Enter the element to be searcher:"<<endl;
    cin>>x;
    for(int i=0; i<5; i++){

    if(array[i]==x){
        cout<<"The element is found at index"<<i<<endl;
        break;
    }
    else
   cout<<"The element is not found in the array"<<endl;
   
}
    return 0;
} // The above code is wrong 