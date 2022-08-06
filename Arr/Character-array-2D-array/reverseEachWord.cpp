#include<algorithm>
#include<cstring>

void reverseEachWord(char input[]){
    int previous = -1;

    for(int i = 0 ;i<= strlen(input) ; i++){
        if(input[i] == ' ' || input[i] == '\0'){
            reverse(input + previous + 1 , input + i);
            previous = i;
        }
    }
}

//Methode 2

void reverseEachWord(char input[]) {
    int count = 0;
    int start = 0;
    int i; 
    for( i = 0 ; input[i] != '\0' ; i++){
        if(input[i] != ' '){
            count++;
        }else{
            for(int j = 0 ; j<(count/2) ; j++){
                char temp = input[start + j];
                input[start+j] = input[i-j-1];
                input[i-j-1] = temp;
            }
           
            start = i+1;
            count = 0;
        }
    }
    // cout<<i<<endl;

     for(int j = 0 ; j<(count/2) ; j++){
                int temp = input[start + j];
                input[start+j] = input[i-j-1];
                 input[i-j-1] = temp;
            }
}