#include<bits/stdc++.h>
void sortZeroesAndOne(int *input, int size)
{
	int start = 0;
	int end = size-1;
    for(int i = 0 ; i< size ; i++){
          if(end == i){
            return;
        }
        if(input[start] == 0){
            start++;
            continue;
        }
        if(input[i] == 0){
            swap(input[i] ,input[start]);
            start++;
        }
        if(input[i] == 1){
            swap(input[i] ,input[end]);
            end--;
            i--;
        }
        if(end == i){
            return;
        }
    }
}
