class Solution {
public:
    int firstUniqChar(string s) {

        for(int i = 0; i < s.length(); i++){
            bool check = true;

            for(int j=0; j < s.length(); j++){
                if(i != j && s[i]==s[j] ){
                    check = false;
                    break;
                }
            }
            if(check == true) return i;
        }

        return -1;
        
    }
};