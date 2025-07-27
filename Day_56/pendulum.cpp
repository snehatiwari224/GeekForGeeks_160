vector<int> pendulumArrangement(int arr[], int n) {
    sort(arr, arr + n);  // Sort the array
    deque<int> dq;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0)
            dq.push_front(arr[i]);  // Even index to the front
        else
            dq.push_back(arr[i]);   // Odd index to the back
    }

    return vector<int>(dq.begin(), dq.end());
}
