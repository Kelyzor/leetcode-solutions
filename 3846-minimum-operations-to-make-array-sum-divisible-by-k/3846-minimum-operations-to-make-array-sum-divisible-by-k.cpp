class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        int kOp = 0;
        for (int n : nums) {
            sum += n;
        }
        while (sum % k != 0) {
            sum--;
            kOp++;
        }
        return kOp;
    }
};