class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (const auto& token : tokens) {
            if (isNumber(token)) {
                stack.push(stoi(token));
            } else {
                int operand2 = stack.top();
                stack.pop();
                int operand1 = stack.top();
                stack.pop();

                if (token == "+") {
                    stack.push(operand1 + operand2);
                } else if (token == "-") {
                    stack.push(operand1 - operand2);
                } else if (token == "*") {
                    stack.push(operand1 * operand2);
                } else if (token == "/") {
                    if (operand2 == 0) {
                        break;
                    }
                    stack.push(operand1 / operand2);
                }
            }
        }

        return stack.top();
    }

private:
    bool isNumber(const string& s) {
        return isdigit(s[0]) || (s.size() > 1 && s[0] == '-' && isdigit(s[1]));
    }
};