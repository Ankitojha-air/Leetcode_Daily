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
        for(int i = arr.size()-1; i >= 0; i--){
            if(arr[i] == 9){
                continue;
            }
            else{
                arr[i] = 9;
                break;
            }
        }
        int x=0;
        for(int i =arr.size()-1 ; i >=0; i--){
            x =x *10 +arr[i];
            
        }
        return x;

        
    }
};