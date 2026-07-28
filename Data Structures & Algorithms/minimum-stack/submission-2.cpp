class MinStack {
public:
    stack<int>main;
    stack<int>temp;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        
        if(temp.empty() || temp.top()>=val){
            temp.push(val);
        }
        
    }
    
    void pop() {
        int value=main.top();
        main.pop();

        if(value==temp.top()){
            temp.pop();

        }
        
    }
    
    int top() {
        return main.top();
        
    }
    
    int getMin() {

        return temp.top();
        
    }
};
