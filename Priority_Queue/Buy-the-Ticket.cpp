#include<queue>
#include<iostream>
using namespace std;
int buyTicket(int *arr, int n, int k) {
    priority_queue<int> pq;
    queue<int> q;
    int count = 0;
    for(int i = 0 ;i<n ; i++){
        q.push(arr[i]);
        pq.push(arr[i]);
    }
    while(true){
        if(q.front() < pq.top()){
            int save = q.front();
            q.pop();
            q.push(save);
            k--;
            if(k == -1){
                k = n-1;
            }
        }else{
            if(k == 0){
                count++;
                return count;
            }
             count++;
            pq.pop();
            q.pop();
            k--;
        }
    }
    
}