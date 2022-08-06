void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int j = 1;
    int len = strlen(input);
    for(int i = 0 ; i<len-1 ; i++){
        if(input[i] != input[i+1]){
            input[j] = input[i+1];
            j++;
        }
    }
    input[j] = '\0';
}