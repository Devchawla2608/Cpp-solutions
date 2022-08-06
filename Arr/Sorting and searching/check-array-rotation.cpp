int arrayRotateCheck(int *input, int size)
{
    if(size == 0){
        return 0;
    }
    for(int i = 0 ;i<size-1 ; i++){
        if(input[i+1]<input[i]){
            return i+1;
        }
    }
    return 0;
}