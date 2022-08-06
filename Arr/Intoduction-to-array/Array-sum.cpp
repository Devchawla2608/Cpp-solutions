#include<iostream>
using namespace std;



int main(){
	int N;
    cin>>N;
    int array[1000000];
    for(int i = 0 ; i<N ;i++){
        cin>>array[i];
    }
    int x = 0;
    
    for(int i = 0 ;i<N ;i++){
        x += array[i];
    }
    cout<<x<<endl;
    return 0;
}


