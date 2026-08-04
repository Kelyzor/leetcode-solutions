class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        bool isEx;
        for (int i = nums[0]; i < nums[size(nums) - 1]; i++) {
            isEx = 0;
            for (int j = 0; j < size(nums); j++) {
                if (nums[j] == i) {
                    isEx = 1;
                    break;
                }
            }
            if (isEx == 0) {
                res.push_back(i);
            }
        }
        return res;
    }
};