class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < size(nums); i++) {
            for (int j = 0; j < size(nums); j++) {
                if (nums[i] == nums[j] && i < j) {
                    count++;
                }
            }
        }
        return count;
    }
};