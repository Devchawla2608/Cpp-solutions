#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *input, int n, int val)
{
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
        mid = (start + end)/2;
        if(input[mid] == val){
            return mid;
        }
        if(input[mid] < val){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}