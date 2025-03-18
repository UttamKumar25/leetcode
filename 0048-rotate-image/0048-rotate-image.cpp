class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose (convert rows into columns)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // j = i+1 to avoid double swap
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    }
};