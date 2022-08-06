void rotate(int *input, int d, int n)
{ 	int i = 0;
 	int input2[d];
	while(i<d){
     input2[i] = input[i];
        i++;
    }
 while(i<n){
     input[i-d] = input[i];
     i++;
 }
 int j = 0;
 while(j<d){
     input[i-d] = input2[j];
         j++;
         i++;
 }
}