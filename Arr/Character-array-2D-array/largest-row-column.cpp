#include<bits/stdc++.h>
/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{

    int maximumSumRow = INT_MIN;
    int sum = 0;
    int indexRow = 0;
    for(int i = 0 ;i< nRows ; i++){
              sum = 0;
        for(int j = 0 ;j<mCols ; j++){
            sum += input[i][j];
        }
        if(sum>maximumSumRow){
            maximumSumRow = sum ;
            indexRow = i;
        }
    }
       // cout<<"Maximum sum of col"<<maximumSumRow<<"At index"<<indexRow<<endl;
    int maximumSumCol = INT_MIN;
     sum = 0;
    int indexCol = 0;
    for(int i = 0 ;i< mCols ; i++){
              sum = 0;
        for(int j = 0 ;j<nRows ; j++){
            sum += input[j][i];
        }
        if(sum>maximumSumCol){
            maximumSumCol = sum ;
            indexCol = i;
        }
    }
    // cout<<"Maximum sum of col"<<maximumSumCol<<"At index"<<indexCol<<endl;
    if(maximumSumCol>maximumSumRow){
        cout<<"column"<< " "<<indexCol<<" "<<maximumSumCol<<endl;
    }else if(maximumSumCol<=maximumSumRow){
        cout<<"row"<<" "<<indexRow<<" "<<maximumSumRow<<endl;
    }
}