class MinStack {
public:
    stack<int> stk;
    stack<int> minstack;

    MinStack() {

    }

    void push(int val) {
         stk.push(val);
      
      if(minstack.empty()){
        minstack.push(val);
      }
      else{
        int minimum = min(val,minstack.top());
        minstack.push(minimum);
      }

    }

    void pop() {
        stk.pop();
        minstack.pop();
    }

    int top() {
        return stk.top();
    }

    int getMin() {
        return minstack.top();
    }

};