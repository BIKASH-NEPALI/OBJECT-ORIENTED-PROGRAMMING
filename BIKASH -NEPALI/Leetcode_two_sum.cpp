//Give an array of integers nums and an integer targer, retrun indices of 
// the two number such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
#include <iostream>

using namespace std;
int main() {
    int nums[5], target;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<5; i++){
        cin>>nums[i];
    }
    cout<<"Enter the target number:"<<endl;
    cin>>target;
    for(int i=0; i<5; i++){
        for (int j=i+1; j<5; j++){
            if(nums[i]+nums[j]==target){
                cout<<"The indices of  two number are:"<<endl;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    return 0;
}

