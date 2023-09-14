class Solution {
public:
    string removeDuplicates(string s) {
     std::stack<char> st;
    
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop(); // Remove the adjacent duplicate
        } else {
            st.push(c); // Push non-duplicate characters onto the stack
        }
    }
    
    // Construct the result string from the stack
    std::string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    return result;
    }
};