class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        //sort both and compare arr1[i]<=arr2[j]

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int match=0;
        int i=0, j=0;
        while(i<players.size() && j< trainers.size()){
            if(players[i]<=trainers[j]){
                match++;   // match found, no futher check in j, iterate i
                i++;  //move  to next player
            }
            j++;   //if not satisfied, move to next trainer and check
        }
        return match;
    }
};