class MinStack {
public:
    vector<int> stack ;
    vector<int> min_stack ; 
    MinStack() {
        
    }
    
    void push(int val) {
        int current_min = val;
        if(min_stack.size()==0){
            min_stack.push_back(val) ; 
        }
        else
        {
            current_min= min(min_stack.back(),val);
            min_stack.push_back(current_min); 
        }
        stack.push_back(val) ; 
    }
    
    void pop() {
        stack.pop_back();
        min_stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return min_stack.back() ; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */