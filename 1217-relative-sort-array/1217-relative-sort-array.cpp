class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(int num: arr1){  //arr1 ko map me daaalo
            mp[num]++;
        }
        vector<int>v;
        //travserdse arr2
        for(int num: arr2){
            while(mp[num]>0){  //jab tak element hai tab tak nikalo
                v.push_back(num);
                mp[num]--;
            }
        }

        //remning ko nikalo
        vector<int>rem;
        for(auto it: mp){
            while(it.second>0){
                rem.push_back(it.first);
                it.second--;
            }
        }

        sort(rem.begin(), rem.end());

        v.insert(v.end(), rem.begin(), rem.end());
        return v;


    /*
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
    */

    }
};