void sortMatrix(vector<vector<int>>& mat) {
    vector<int> temp;
    for (auto& row : mat) {
        for (int x : row) {
            temp.push_back(x);
        }
    }
    sort(temp.begin(), temp.end());
    int k = 0;
    for (auto& row : mat) {
        for (int& x : row) {
            x = temp[k++];
        }
    }
}
