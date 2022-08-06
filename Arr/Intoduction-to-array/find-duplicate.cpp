#include<bits/stdc++.h>
using namespace std;
int duplicateNumber(int *arr, int size)
{
    int store[100000];
    fill_n(store , 100000 , 2);
    
    for(int i = 0 ; i<size; i++){
        if(store[arr[i]] != 0){
            store[arr[i]]--;
        }
    }
     for(int i = 0 ; i<size; i++){
        if(store[arr[i]] == 0){
            return arr[i];
        }
    }
}