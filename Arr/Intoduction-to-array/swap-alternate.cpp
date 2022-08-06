void swapAlternate(int *arr, int size)
{
    for(int i = 0 ; i<size ; i++){
        if(i == size-1){
            return;
        }
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i++;
        }
}