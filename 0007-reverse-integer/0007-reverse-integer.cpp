class Solution {
public:
    int reverse(int x) {

        string s = to_string(x);
        if(x<0)
            std::reverse(s.begin()+1, s.end());
        else //if +ve
            std::reverse(s.begin(), s.end());
        
        return (stol(s)>INT_MAX || stol(s)<INT_MIN) ?0:stoi(s);
        
    }
    
};