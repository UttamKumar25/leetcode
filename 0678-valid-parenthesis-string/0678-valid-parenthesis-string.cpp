class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0; // Minimum open parentheses possible
        int maxOpen = 0; // Maximum open parentheses possible

        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            } else if (c == ')') {
                minOpen = max(0, minOpen - 1);
                maxOpen--;
                if (maxOpen < 0) return false; // Too many closing parentheses
            } else { // c == '*'
                minOpen = max(0, minOpen - 1); // `*` can act as `)`
                maxOpen++;                     // `*` can act as `(`
            }
        }

        // All open parentheses must be balanced
        return minOpen == 0;
    }
};