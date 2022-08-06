  void selectionSort(int arr[], int n)
    {
  for(int i = 0 ; i< n-1 ; i++){
           int min = INT_MAX;
           int store;
           for(int j = i ; j< n ; j++){
               if(arr[j] < min){
                   min = arr[j];
                   store = j;
               }
           }
           int temp = arr[store];
           arr[store] = arr[i];
           arr[i] = temp;
       } 
    }