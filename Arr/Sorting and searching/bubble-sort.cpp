void bubbleSort(int *input, int size)
{
	for(int i = 0 ; i<size-1 ; i++){
        int j = 0;
        for(; j<size-i-1 ; j++){
            if(input[j] > input[j+1]){
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}