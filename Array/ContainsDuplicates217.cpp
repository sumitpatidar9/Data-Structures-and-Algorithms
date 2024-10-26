class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapp;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(mapp.find(nums[i]) != mapp.end()){
                return true;
            }
            mapp[nums[i]]++;
        }

        return false;
    }
};