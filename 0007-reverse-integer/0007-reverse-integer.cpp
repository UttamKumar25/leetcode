class Solution {
public:
    int reverse(int x) {
        long sum = 0;

    while (x != 0) {  // THIS METHOD HANDLE FOR BOTH +VE and -ve AS WELL FOR REVERSE
        int rem = x % 10;
        sum = sum * 10 + rem;
        x = x / 10;
    }
    if (sum > INT_MAX || sum < INT_MIN) {// if REV goes beyond 2^31 return 0 {GIVEN IN QUES}
        return 0;
    }

    return (int)sum;
        /*string s = to_string(x);
        if(x<0)
            std::reverse(s.begin()+1, s.end());
        else //if +ve
            std::reverse(s.begin(), s.end());
        
        return (stol(s)>INT_MAX || stol(s)<INT_MIN) ?0:stoi(s);*/
        
    }
    
};