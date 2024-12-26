class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int left=0;
        int right=people.size()-1;
        int boat=0;

        while(left<=right){
            if(people[left]+ people[right]<=limit){
                boat++;
                left++;
                right--;
            }else{
                //consider right only if limit exceed
                right--;
                boat++;
            }
        }

        return boat;

    }
};