class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        size_t count = 0;
        for (size_t i = 0; i < size(nums); i++) {
            for (size_t j = i + 1; j < size(nums); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};