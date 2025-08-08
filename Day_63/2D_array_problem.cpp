vector<vector<int>> transpose(int a[][M], int n) {
    vector<vector<int>> result(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = a[i][j];
        }
    }
    
    return result;
}