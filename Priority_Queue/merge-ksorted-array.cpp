#include<queue>
#include<iostream>
using namespace std;
int kthLargest(int* arr, int n, int k) {
    priority_queue<int> pq;
    for(int i = 0 ;i<n ; i++){
        pq.push(arr[i]);
    }
    for(int i = 0 ;i<k-1 ; i++){
        pq.pop();
    }
    // cout<<pq.top()<<endl;
    return pq.top();
}