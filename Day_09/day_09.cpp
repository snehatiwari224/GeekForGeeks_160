class Solution {
  public:
    bool isFrequencyUnique(int n, int arr[]) {
        unordered_map<int, int> freqMap;
        
      
        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }

   
        unordered_set<int> freqSet;
        for (auto& entry : freqMap) {
            if (freqSet.count(entry.second)) {
                return false;  
            }
            freqSet.insert(entry.second);
        }

        return true; 
    }
};