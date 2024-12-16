class Solution {
public:
    int reverse(int x) {
        std::string s = std::to_string(x); // Explicit std:: namespace for clarity
        bool isNegative = (s[0] == '-');
        
        std::reverse(s.begin(), s.end()); // Explicitly use std::reverse
        
        // Build the reversed string
        std::string ans = "";
        if (isNegative) {
            ans += '-';
            ans += s.substr(0, s.length() - 1); // Skip the '-' in the reversed string
        } else {
            ans = s;
        }
        
        // Convert to integer and check for overflow
        try {
            int reversedNum = std::stoi(ans); // Explicit std:: namespace for stoi
            return reversedNum;
        } catch (std::out_of_range&) {
            return 0; // Return 0 in case of overflow
        }
    }
    
};