class MinStack {
public:
    stack<int> stk;
    stack<int> min;

    MinStack() {
        
    }
    
    void push(int val) {
        if(!min.empty() && min.top() < val) {
            min.push(min.top());
        }
        else {
            min.push(val);
        }

      stk.push(val);

    }
    
    void pop() {
        stk.pop();
        min.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min.top();
    }
};
