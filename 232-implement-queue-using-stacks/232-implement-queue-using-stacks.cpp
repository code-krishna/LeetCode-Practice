class MyQueue {
public:
    
    stack<int> st;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        this->st.push(x);
    }
    
    int pop() {
        stack<int> tmp;
        while(!this->st.empty()){
            tmp.push(this->st.top());
            this->st.pop();
        }
        int res = tmp.top();
        tmp.pop();
        while(!tmp.empty()){
            this->st.push(tmp.top());
            tmp.pop();
        }
        return res;
    }
    
    int peek() {
        stack<int> tmp;
        while(!this->st.empty()){
            tmp.push(this->st.top());
            this->st.pop();
        }
        int res = tmp.top();
        while(!tmp.empty()){
            this->st.push(tmp.top());
            tmp.pop();
        }
        return res;
    }
    
    bool empty() { 
        return this->st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */