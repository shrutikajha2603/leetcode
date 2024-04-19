class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stack;
        for (const string& i : logs) {
            if (i == "./") {
            } else if (i == "../") {
                if (!stack.empty()) {
                    stack.pop(); 
                }
            } else {
                stack.push(i);
            }
        }
        return stack.size(); 
    }
};
