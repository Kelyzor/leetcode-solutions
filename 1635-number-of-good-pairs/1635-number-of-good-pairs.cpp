#include <unordered_map>

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> counts;
        size_t count = 0;
        for (int x : nums) {
            count += counts[x];
            counts[x]++;
        }
        return count;
    }
};