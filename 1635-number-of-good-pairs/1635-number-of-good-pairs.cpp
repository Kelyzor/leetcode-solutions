class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counts[101] = {0};
        size_t count = 0;
        for (int x : nums) {
            count += counts[x];
            counts[x]++;
        }
        return count;
    }
};