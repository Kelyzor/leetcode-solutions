class Solution {
public:
    int minTimeToType(string word) {
        int sec = word.length();
        if (word[0] != 'a') {
            sec += min(word[0] - 'a', 26 - (word[0] - 'a'));
        }
        for (int i = 0; i < word.length() - 1; i++) {
            int clock = abs(word[i] - word[i + 1]);
            int counter = 26 - clock;
            sec += min(clock, counter);
            cout << sec << " " << clock << " " << counter << endl;
        }
        return sec;
    }
};