class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;

        unordered_map<int, int> mapp;

        for (int j = 0; j < nums.size(); ++j) {
            
            if (mapp.find(nums[j]) != mapp.end() && j - mapp[nums[j]] <= k) {
                return true;
            }
            mapp[nums[j]] = j; 
            
            
            if (mapp.size() > k) {
                mapp.erase(nums[j - k]); 
            }
        }

        return false;
    }
};