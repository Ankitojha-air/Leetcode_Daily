class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(int i = 0; i < words.size(); i++){
            bool check = true;
            for(int j = 0; j < words[i].length()/2; j++){

                if(words[i][j] != words[i][words[i].length() - 1 - j]) {
                    check = false;
                    break;
                    
                }
                
            }
            if(check == true) return words[i];
        }
        return ""; 
    }
};