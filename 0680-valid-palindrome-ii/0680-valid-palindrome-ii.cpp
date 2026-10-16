class Solution {
public:
bool ispal(string s,int left,int right){
    while(left < right){
        if(s[left] != s[right]) return false;

        left++;
        right--;
    }
    return true;
}

    bool validPalindrome(string s) {
        int left =0, right = s.length() - 1;
        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else {
                return ispal(s,left+1,right) || ispal(s,left,right-1);
            }
        }
        return true;
    }
};