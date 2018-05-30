/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 34.53 %
    Runtime : 2 ms
    Testcase : 16 / 16 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> que;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        que.push(x);
        for(int i = 0; i < que.size()-1; i++)
        {
            que.push(que.front());
            que.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val = que.front();
        que.pop();
        return val;
    }
    
    /** Get the top element. */
    int top() {
        return que.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */