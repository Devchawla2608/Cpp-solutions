bool checkPalindrome(char str[]) {
    int count = 0;
   
    for(int i = 0 ; str[i]!='\0' ; i++){
        count++;
    }
     char array[count + 1];
    int j = 0;
    for(int i = count - 1 ; i>=0 ; i--){
        array[j] = str[i];
        j++;
    }
    array[j] = '\0';
    for(int i = 0 ; str[i] !='\0' ; i++){
        if(str[i] != array[i]){
            return false;
        }
          }
    return true;
    
}
