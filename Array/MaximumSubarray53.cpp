class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maximum = INT_MIN;
        int n = nums.size();

        if(n == 1){
            return nums[0];
        }



        for(int i = 0; i<n; i++){
            sum+= nums[i];

            maximum = max(maximum, sum);

            if(sum < 0){
                sum = 0;
            }
        }


        return maximum;
        
    }
};