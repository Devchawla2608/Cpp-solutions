void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.size() == 0){
        return;
    }
    int temp = input.top();
    input.pop();
    reverseStack(input, extra);
    while(input.size() !=0){
        extra.push(input.top());
        input.pop();
    }
    
    input.push(temp);
     while(extra.size() !=0){
        input.push(extra.top());
        extra.pop();
    }
    return;
}