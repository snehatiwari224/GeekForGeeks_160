class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        vector<int> freq(size + 1, 0);
        int repeated = -1, missing = -1;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (freq[grid[i][j]]) {
                    repeated = grid[i][j];
                } else {
                    freq[grid[i][j]] = true;
                }
            }
        }

        for (int i = 1; i <= size; i++) {
            if (!freq[i]) {
                return {repeated, i};
            }
        }

        
        return {repeated, missing}; 
    }
};
