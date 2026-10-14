class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int k =2; k <= n; k++){
            string next = "";
            int i =0;
            while(i < s.size()){
                int count = 1;
                while(i + 1 < s.size() && s[i] == s[i+1]){
                count++;
                i++;
            }
            next +=to_string(count);
            next += s[i];
            i++;
          }
          s = next;
        }
        return s;
        
    }
};