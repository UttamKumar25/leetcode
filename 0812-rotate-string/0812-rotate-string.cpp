class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        //s=abcde ,   s+s=abcdeabcde
        // Concatenate s with itself
        string concatenated = s + s; //it will contain goal string if there

        // Check if goal is a substring of the concatenated string
        return concatenated.find(goal) != string::npos; //if found, then it is valid index
        //so if valid index !=OUT RANGE, So this statement is true, so TRUE IS RETURNED returned

    }
};