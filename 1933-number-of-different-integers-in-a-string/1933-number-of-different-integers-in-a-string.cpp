class Solution {
public:
    int numDifferentIntegers(string word) {
    set<string> s;  // Set to store unique normalized numbers
        string number = "";

        for (char c : word) {
            if (isdigit(c)) {
                number += c;  // Build the number string
            } else if (!number.empty()) {
                s.insert(removeLeadingZeros(number));  // Store without leading zeros
                number = "";  // Reset for the next number
            }
        }

        // Process last number if present
        if (!number.empty()) {
            s.insert(removeLeadingZeros(number));
        }

        return s.size();
    }

    string removeLeadingZeros(string num) {
        int i = 0;
        while (i < num.size() - 1 && num[i] == '0') {
            i++;  // Skip leading zeros
        }
        return num.substr(i);  // Return number without leading zeros
    }
};