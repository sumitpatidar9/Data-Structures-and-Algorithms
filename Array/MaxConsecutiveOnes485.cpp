class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        long maximum = 0;
        long count = 0;

        while(j<n){
            if(nums[j] == 1){
                count++;
                maximum = max(maximum, count);
            }
            else{
                count = 0;
            }
            j++;
        }

        return maximum;
    }
};