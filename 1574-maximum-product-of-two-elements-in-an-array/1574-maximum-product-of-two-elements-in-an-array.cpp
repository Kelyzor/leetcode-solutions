class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = 0;
        size_t len = nums.size();
        for (size_t i = 0; i < len; i++) {
            for (size_t j = 0; j < len; j++) {
                if ((nums[i] - 1) * (nums[j] - 1) > maxProduct && i != j) {
                    maxProduct = (nums[i] - 1) * (nums[j] - 1);
                } 
            }
        }
        return maxProduct;
    }
};