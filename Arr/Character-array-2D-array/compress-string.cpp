#include<cstring>
#include<bits/stdc++.h>
string getCompressedString(string &input) {
    int len = input.length();
    char arr[len+1];
    strcpy(arr, input.c_str());
    int temp = 0;
    int count = 1;
    int i = 0;
    for( i  ; i<len-1 ; i++){
        if(arr[i] != arr[i+1]){
            if(count !=1 ){
            arr[temp] = arr[i];
            string str1 = to_string(count);
            arr[temp+ 1] = str1[0];
            temp = temp +2;
            count = 1;                
            }else{
                arr[temp] = arr[i];
                temp = temp+1;
            }

        }else{
            count++;
        }
    }
     if(count !=1 ){
            arr[temp] = arr[i];
            string str1 = to_string(count);
            arr[temp+ 1] = str1[0];
            temp = temp +2;
            count = 1;                
            }else{
                arr[temp] = arr[i];
         temp = temp+1;
            }

    char x[temp];
    strcpy(x , arr);
    x[temp] = '\0';
    return x;
}

// This function also set the \0 in the last 