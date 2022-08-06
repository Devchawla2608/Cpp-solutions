char highestOccurringChar(char input[]) {
    int arr[256] = {0};
    for(int i = 0 ;input[i] != '\0' ; i++){
        arr[input[i]] += 1; 
    }
    int max = 0;
    int store = 0;
    for(int i = 0 ;i<256 ; i++){
        if(max<arr[i]){
            max = arr[i];
            store = i;
        }
    }
    char x = store;
    return x;
}