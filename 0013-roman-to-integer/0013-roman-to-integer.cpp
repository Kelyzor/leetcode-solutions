class Solution {
public:
    int rTI(char s) {
        if (s == 'I') {
            return 1;
        } else if (s == 'V') {
            return 5;
        } else if (s == 'X') {
            return 10;
        } else if (s == 'L') {
            return 50;
        } else if (s == 'C') {
            return 100;
        } else if (s == 'D') {
            return 500;
        } else {
            return 1000;
        }
    }

    int romanToInt(string s) {
        int su = 0, s1, s2;
        for (int i = 0; i < s.length(); i++) {
            su += rTI(s[i]);
        }
        for (int i = 0; i < s.length() - 1; i++) {
            s1 = rTI(s[i]);
            s2 = rTI(s[i + 1]);
            if (s1 < s2) {
                su -= 2 * s1;
            }
        }
        return su;
    }
};