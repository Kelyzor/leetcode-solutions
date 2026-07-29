class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int k1 = 0, k2 = 0;
        while (word1.length() > k1) {
            result += word1[k1];
            k1++;
            if (word2.length() > k2) {
                result += word2[k2];
                k2++;
            }
        } 
        while (word2.length() > k2) {
            result += word2[k2];
            k2++;
        }
        return result;
    }
};