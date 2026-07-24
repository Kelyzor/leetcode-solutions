class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        size_t count = 0;
        for (size_t i = 0; i < size(nums); i++) {
            for (size_t j = 0; j < size(nums); j++) {
                if (nums[i] == nums[j] && i < j) {
                    count++;
                }
            }
        }
        return count;
    }
};