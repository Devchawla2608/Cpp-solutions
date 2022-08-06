#include<bits/stdc++.h>

// Method 1 


void removeAllOccurrencesOfChar(char input[], char c) {
    int len = strlen(input);
    char arr[len+1];
    int j = 0;
    for(int i = 0 ; i<len ; i++){
        if(input[i] != c){
            arr[j] = input[i];
            j++;
        }
    }
    arr[j] = '\0';
    for(int i = 0 ;i<j ; i++){
        input[i] = arr[i];
    }
    input[j] = '\0';
}

// Mthode2

void removeAllOccurrencesOfChar(char input[], char c) {
    int trim = 0;
    int len = strlen(input);
    for(int i = 0 ; i<len ; i++){
        if(input[i] != c){
            int temp = input[trim];
            input[trim] = input[i];
            input[i] = temp;
    		trim++;
        }
    }
    input[trim] = '\0';
}