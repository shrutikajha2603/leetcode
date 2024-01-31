class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        stack<int> stack;

        for (int i = 0; i < n; ++i) {
            while (!stack.empty() && temperatures[i] > temperatures[stack.top()]) {
                int prevIndex = stack.top();
                stack.pop();
                answer[prevIndex] = i - prevIndex;
            }

            stack.push(i);
        }

        return answer;
    }
};