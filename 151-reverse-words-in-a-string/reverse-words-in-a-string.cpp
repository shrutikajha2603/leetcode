class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string str;
        stringstream ss(s); 

        while (ss >> str) {
            st.push(str);
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += " "; 
        }

        return ans;
    }
};
