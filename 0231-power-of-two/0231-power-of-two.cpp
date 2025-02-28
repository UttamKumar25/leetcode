class Solution {
public:
    bool isPowerOfTwo(int n) {
        //int max 2 power 31
        return (n > 0) && (ceil(log2(n)) == floor(log2(n)));
        /*for(int i =0;i<31;i++){
        int ans = pow(2,i);
            
            if(ans == n)return true;

        }
        return false;*/
    }
};