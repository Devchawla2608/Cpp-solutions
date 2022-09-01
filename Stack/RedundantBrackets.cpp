#include<stack>
bool checkRedundantBrackets(string expression) {
	stack<int> s;
    for(int i = 0 ;i<expression.length() ; i++){
        if(expression[i] == ')'){
            int count = 0;
            while(s.top() != '('){
                s.pop();
                count++;
            }
            s.pop();
            if(count <= 1){
                return true;
            }
        }else{
        s.push(expression[i]);     
        }
    }
    return false;
}