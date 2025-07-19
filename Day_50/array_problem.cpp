class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    long long splitArray(vector<int>& nums) {
        long long sumA = 0, sumB = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (isPrime(i)) {
                sumA += nums[i]; // prime index
            } else {
                sumB += nums[i]; // non-prime index
            }
        }

        return abs(sumA - sumB);
    }
};
