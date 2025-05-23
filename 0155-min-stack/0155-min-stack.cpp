class MinStack {
    vector<int> s;

public:
    MinStack() {

    }
    
    void push(int val) {
        s.push_back(val);
    }
    
    void pop() {
        if (!s.empty())
            s.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        int min = s[0];
        for(int val : s){
            if(val < min){
                min = val;
            }
        }

        return min;
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