class Solution {
public:

/*void rev(vector<int>& num, int low, int high){
    while(low<high){
        swap(num[low], num[high]);
        low++;
        high--;
    }
} */
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k=k%n;
        std:: rotate(nums.begin(), nums.end()-k, nums.end());
        /*
        rev(nums,0, n-k-1);
        rev(nums, n-k,n-1);
        rev(nums,0, n-1);  */
    }
};