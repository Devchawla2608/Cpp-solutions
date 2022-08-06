void print(int *input, int size){
    for(int i = 0 ;i<size ; i++){
        cout<<input[i]<<" ";
    }
}

void insertionSort(int *input, int size)
{
 	for(int i = 1; i<size ; i++){
        int newElement = input[i];
        int j;
        for(j = i-1; j>=0 ; j--){
            if(newElement<input[j]){
                input[j+1] = input[j];
            }else{
                break;
            }
        }
        input[j+1] = newElement;
        // print(input , size);
        // cout<<endl;
    }   
}