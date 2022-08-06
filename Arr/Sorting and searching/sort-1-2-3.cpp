void sort012(int *arr, int n)
{
    int start = 0;
    int end = n-1;
    for(int i = 0 ;i<n ; i++){
        if(arr[i] == 0){
            int temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
            start++;
        }
        if(arr[i] == 2){
              int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--;
            i--;
        }
        if(i == end){
            return;
        }
    }
}