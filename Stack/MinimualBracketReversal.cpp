#include<bits/stdc++.h>
int countBracketReversals(string input) {
    stack<int> s;
    int count = 0;
    for(int i = 0 ;i< input.length() ; i++){
        if(input[i] == '}'){
            if(s.size() == 0){
                s.push(input[i]);
            }
            else if(s.top() == '}'){
                 s.push(input[i]);
            }else{
                s.pop();
            }
        }
 else{
      s.push(input[i]);
 }   
       
    }
    

    while(s.size()!=0){
        if(s.size()%2 != 0){
            return -1;
        }
    	char c1 = s.top();
    	s.pop();
    	char c2 = s.top();
    	s.pop();
    	if(c1 == c2){
        	count++;
    	}else{
        	count = count + 2;
    	}    
    }
 return count;   
}