class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>result, current, next;
        for(int num : arr){
            next.clear();
            next.insert(num);
            for(int x : current){
                next.insert(x|num);
            }
            current=next;
            result.insert(current.begin(), current.end());
        }
        return result.size();
    }
};