#include<climits>
int findSecondLargest(int *input, int n)
{
    int maximum = INT_MIN;
    int secondMaximum = INT_MIN;
    for(int i = 0 ;i<n ; i++){
        if(input[i]>maximum){
            secondMaximum = maximum;
            maximum = input[i];
        }
        else if(input[i] <maximum && input[i] >secondMaximum){
            secondMaximum = input[i];
        }
    }
    return secondMaximum;
}