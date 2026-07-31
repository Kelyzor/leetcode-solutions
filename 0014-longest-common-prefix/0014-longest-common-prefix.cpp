class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (string str : strs) {
            if (prefix.length() > str.length()) {
                prefix = prefix.substr(0, str.length());
            }
            for (size_t i = 0; i < str.length(); i++) {
                if (str[i] != prefix[i]) {
                    cout << prefix << " ";
                    prefix = prefix.substr(0, i);
                    cout << prefix << endl;
                    break;
                } 
            }
        }
        return prefix;
    }
};