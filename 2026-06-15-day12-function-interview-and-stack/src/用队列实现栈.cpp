class MyStack {
public:
queue<int> q1;
queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q1.empty())
        {
            q2.push(x);
        }
        else 
            q1.push(x);
        
    }
    
    int pop() {
        int temp;
        if(q2.empty())
        {
            temp = q1.back();
            int n = q1.size();
            for(int i=0;i<n-1;i++)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }
        else
        {
            temp = q2.back();
            int n = q2.size();
            for(int i=0;i<n-1;i++)
            {
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
        }
            
        return temp;
        
    }
    
    int top() {
        if(q2.empty())
        {
            return q1.back();
        }
        else
            return q2.back();
    }
    
    bool empty() {
        if(q1.empty()&&q2.empty())return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */