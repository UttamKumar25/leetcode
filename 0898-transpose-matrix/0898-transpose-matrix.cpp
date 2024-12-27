class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(); //row
        int n=matrix[0].size(); //col size

        vector<vector<int>> result(n, vector<int>(m));
    
    // Perform the transpose
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    
    return result;
    }
};