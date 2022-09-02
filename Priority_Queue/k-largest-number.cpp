#include<bits/stdc++.h>
using namespace std;
vector<int> kLargest(int input[], int n, int k){
   priority_queue<int , vector<int> , greater<int> > pq;
    for(int i = 0 ; i<k;i++){
        pq.push(input[i]);
    }
     
    for(int i = k ; i<n ; i++){
        int topElement = pq.top();
        if(input[i]>topElement){
            pq.pop();
            pq.push(input[i]);
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


