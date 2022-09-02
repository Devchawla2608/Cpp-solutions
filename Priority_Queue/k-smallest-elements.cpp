#include<bits/stdc++.h>
using namespace std;
vector<int> kSmallest(int arr[], int n, int k) {
    priority_queue<int> pq;
    for(int i = 0 ; i<k;i++){
        pq.push(arr[i]);
    }
     
    for(int i = k ; i<n ; i++){
        int topElement = pq.top();
        if(arr[i]<topElement){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> v;
    while(pq.size()!=0){
        v.push_back(pq.top());
        // cout<<pq.top()<<" ";
        pq.pop();
    }
    return v;
}