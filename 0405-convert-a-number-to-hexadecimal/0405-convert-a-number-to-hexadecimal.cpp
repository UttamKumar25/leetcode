class Solution {
public:
    string toHex(int num) {
    if(num==0) return "0";
    unsigned int ourNum = num; // handle negactive also
    string res="";
    string hexa="0123456789abcdef";
    
    while(ourNum>0){
        int d=ourNum%16;
        res+=hexa[d];
        ourNum /= 16;
    }
    
    reverse(res.begin(), res.end());
    return res;
}
    
};