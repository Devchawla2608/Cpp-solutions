// ********************** Methode 1 *************************

void pushZeroesEnd(int *input, int size)
{
    int input2[size];
    int j = 0;
    int i = 0;
   while(i<size){
        if(input[i] != 0){
            input2[j] = input[i];
            j++;
        }
       i++;
    }
    while(j<size){
        input2[j] = 0;
        j++;
    }
    for(int i = 0 ; i<size ; i++){
        input[i] = input2[i];
    }
}
// ********************** Methode 2 *************************

void pushZeroesEnd(int *input, int size)
{
    int store = 0;
    for(int i = 0 ;i<size ;i++){
        if(input[i] != 0){
            int temp = input[i];
            input[i] = input[store];
            input[store] = temp;
            store++;
        }
    }
}