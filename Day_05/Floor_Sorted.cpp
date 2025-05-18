class Solution {
  public:

   int findFloor(vector<int>& arr, int x) {
    int index = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] <= x) {
            index = i;
        } else {
            break;
        }
    }
    return index;
}
};
// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
// Output: 1
// Explanation: Largest number less than or equal to 5 is 2, whose index is 1.
// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
// Output: 4
// Explanation: Largest Number less than or equal to 11 is 10, whose indices are 3 and 4. The index of last occurrence is 4.