class Solution {
public:
    bool isBalanced(string num) {
        int sum = 0, add = 0;
        for(int i =0 ; i < num.size(); i++){
            if(i & 1){
                sum += num[i] -'0';
            }
            else add += num[i] -'0';

        }
        if(sum == add) return true;
        else return false;
        
    }
};