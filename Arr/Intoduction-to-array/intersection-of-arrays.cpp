#include<bits/stdc++.h>
using namespace std;
void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i = 0 ; i<size1 ; i++){
        int store = input1[i];
        for(int j = 0 ; j< size2 ; j++){
            if(input2[j] == store){
                cout<<store<<" ";
                input2[j] = INT_MIN;
                break;
            }
        }
    }
}