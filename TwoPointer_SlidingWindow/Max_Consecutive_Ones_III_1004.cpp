class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int i = 0;
       int j = 0;
       int count = 0;
       int n = nums.size();
       int maximum = 0;

       while(j<n){
            if(nums[j] == 0) count++;

            if(count > k){
                if(nums[i] == 0) count--;
                i++;
            }

            if(count <= k){
                maximum = max(maximum, j-i+1);
            }
            j++;
       }

       return maximum; 
    }
};