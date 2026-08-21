class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = INT_MIN;

        for(int i =0; i < sentences.size(); i++){
            int spaces = 1;

            for(int j =0; j < sentences[i].length(); j++){
                if(sentences[i][j] == ' ')
                spaces++;
            }
            if(spaces > max){
                max = spaces;
            }
        }
        return max;    
    }
};