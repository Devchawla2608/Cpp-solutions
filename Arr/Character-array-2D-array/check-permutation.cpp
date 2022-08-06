#include<bits/stdc++.h>
bool isPermutation(char input1[], char input2[]) {
  	int size1 = strlen(input1);
	int size2 = strlen(input1);
    int array[256] = {0};
    if(size1 != size2){
        return false;
    }
    
    for(int i = 0 ;i<size1 ; i++){
	    array[input1[i]] += 1;
    	array[input2[i]] -= 1;
    }
    int max = *max_element (array, array+256);
    if(max != 0){
        return false;
    }
    return true;
    
}