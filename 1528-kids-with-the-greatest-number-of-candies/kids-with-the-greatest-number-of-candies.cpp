#include <vector>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> result;
        
        for (int i = 0; i < candies.size(); i++) {
            int tc = candies[i] + extraCandies;
            bool canHaveMaxCandies = true;

            for (int j = 0; j < candies.size(); j++) {
                if (tc < candies[j]) {
                    canHaveMaxCandies = false;
                    break;  
                }
            }

            result.push_back(canHaveMaxCandies);
        }

        return result;
    }
};
