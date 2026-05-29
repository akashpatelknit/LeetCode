class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        int poppedValue = st.top();
        st.pop();
        if (minSt.top() == poppedValue) {
            minSt.pop();
        }
    }

    int top() { return st.top(); }

    int getMin() { return minSt.top(); }
};