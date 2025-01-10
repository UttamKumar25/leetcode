class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0;
        
        while (i < words.size()) {
            // Find words that fit in current line
            int lineLength = words[i].length();
            int j = i + 1;
            
            while (j < words.size() && lineLength + words[j].length() + (j - i) <= maxWidth) {
                lineLength += words[j].length();
                j++;
            }
            
            // Create the line
            string line;
            int spaces = maxWidth - lineLength;
            
            // Last line or single word
            if (j == words.size() || j == i + 1) {
                line = words[i];
                for (int k = i + 1; k < j; k++) {
                    line += " " + words[k];
                }
                line += string(maxWidth - line.length(), ' ');
            } 
            // Middle lines
            else {
                int gaps = j - i - 1;
                int spacesPerGap = spaces / gaps;
                int extraSpaces = spaces % gaps;
                
                line = words[i];
                for (int k = i + 1; k < j; k++) {
                    int currentSpaces = spacesPerGap + (extraSpaces-- > 0 ? 1 : 0);
                    line += string(currentSpaces, ' ') + words[k];
                }
            }
            
            result.push_back(line);
            i = j;
        }
        
        return result;
    }
};