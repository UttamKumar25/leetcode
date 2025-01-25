class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      // Step 1: Populate the HashMap with Frequencies
    unordered_map<int, int> freqMap;
    for (int num : arr1) {
        freqMap[num]++;
    }

    // Step 2: Place Elements from arr2 in the Result Array
    vector<int> result;
    for (int num : arr2) {
        while (freqMap[num] > 0) {
            result.push_back(num);
            freqMap[num]--;
        }
        //freqMap.erase(num); // Remove from map once done
    }

    // Step 3: Collect Remaining Elements
    vector<int> remainingElements;
    for (auto pair : freqMap) {
        while (pair.second > 0) {
            remainingElements.push_back(pair.first);
            pair.second--;
        }
    }

    // Step 4: Sort and Append Remaining Elements
    sort(remainingElements.begin(), remainingElements.end());
    result.insert(result.end(), remainingElements.begin(), remainingElements.end());

    // Step 5: Return the Result Array
    return result;   
    }
};