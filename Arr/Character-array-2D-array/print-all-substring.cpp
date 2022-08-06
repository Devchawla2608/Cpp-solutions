#include<bits/stdc++.h>
void printSubstrings(char input[]) {
    int len = strlen(input);
    int count = 0;
    while(count <len){
        for(int i = count ;  input[i] !='\0' ; i++){
            for(int j = count ; j<=i ; j++){
                cout<<input[j];
            }
            cout<<endl;
        }
        count = count + 1;
    }
}

// My best solution in first time 