class Solution {
public:
    bool checkString(string s) {
        bool seenb = false;

        for(int i=0; i < s.size(); i++){
            if(s[i] == 'b'){
                seenb = true;
            }
            if(s[i] == 'a' && seenb)
            return false;
        }
        return true;
    }
};