class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xoR = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            xoR = xoR^nums[i];
        }
        return xoR;
    }
};