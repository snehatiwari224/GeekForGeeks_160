int maxAppear(int left[], int right[], int n) {
    int MAX = 1000;
    int freq[MAX] = {0};


    for (int i = 0; i < n; i++) {
        freq[left[i]] += 1;
        freq[right[i] + 1] -= 1;
    }

   
    int maxVal = freq[0], res = 0;
    for (int i = 1; i < MAX; i++) {
        freq[i] += freq[i - 1];
        if (freq[i] > maxVal) {
            maxVal = freq[i];
            res = i;
        }
    }

    return res;
}
