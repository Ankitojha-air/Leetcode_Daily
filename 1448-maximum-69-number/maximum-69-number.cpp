class Solution {
public:
    int maximum69Number (int num) {
        vector<int>arr;
        int n = num;

        while(n > 0){
            int digit = n % 10;
            arr.push_back(digit);
            n /=10;
        }
        reverse(arr.begin() , arr.end());
        
        for(int i =0 ;i < arr.size(); i++){
            if(arr[i] == 9){
                continue;
            }
            else{
                arr[i] = 9;
                break;
            }
        }
        int x=0;
        for(int i=0; i < arr.size();i++){
            x = x *10 +arr[i];
            
        }
        return x;

        
    }
};