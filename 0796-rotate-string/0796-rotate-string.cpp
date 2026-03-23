class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        for (int i = 0; i < s.size(); i++) {
            char first = s[0];
            s = s.substr(1) + first;

            if (s == goal) return true;
        }
        return false;
    }
};