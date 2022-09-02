#include<iostream>
using namespace std;
bool isMaxHeap(int arr[], int n) {
    if(n == 1){
        return true;
    }
    bool get =  isMaxHeap(arr+1,  n-1); 
    if(get == false){
        return false;
    }
    if(arr[0] > arr[1]){
        
        return true;
    }else{
        // cout<<arr[0]<<arr[1]<<endl;
        return false;
    }
}