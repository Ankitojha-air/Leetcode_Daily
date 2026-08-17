class Solution {
public:
    string largestEven(string s) {

        for (int i = s.size() - 1; i >= 0; i--) {
            int digit = s[i] - '0';
            if (digit % 2 == 0) {
                return s.substr(0, i + 1);
            }
        }
        return "";
    }
};