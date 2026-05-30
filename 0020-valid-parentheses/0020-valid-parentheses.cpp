class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('0');
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            } else {
                char ch = st.top();

                // checking either we got closed paranthesis or not
                if (i == ')' && ch == '(' || i == '}' && ch == '{' ||
                    i == ']' && ch == '[') {
                    st.pop();
                } else {
                    st.push(i);
                }
            }
        }
        if (st.top() == '0') {
            return 1;
        }
        return 0;
    }
};