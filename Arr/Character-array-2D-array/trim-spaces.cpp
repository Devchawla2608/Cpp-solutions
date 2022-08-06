// // Methode1 
// #include<bits/stdc++.h>
// int findLength(char *array){
//     int count = 0;
//     for(int i = 0 ; array[i]!='\0' ; i++){
//         count++;
//     }
//     return count;
// }


// void trimSpaces(char input[]) {
    
//     int length = findLength(input);
//     char array[length + 1 ];
//     int i = 0;
//     int j = 0;
//     while(i<length){
//         if( input[i] != ' '){
//             array[j] = input[i];
//             j++;
//         }
//         i++;
//     }
//     array[j] = '\0';
//     int k ;
//     for( k= 0 ; k<length ; k++){
//         input[k] = array[k];
//     }
//     input[k-1] = '\0';
// }

// Methode 2
void trimSpaces(char input[]) {
    int j = 0;
    for(int i = 0 ; input[i] != '\0' ; i++){
        if(input[i] != ' '){
            input[j] = input[i];
            j++;
        }
    }
 input[j] = '\0';
}

