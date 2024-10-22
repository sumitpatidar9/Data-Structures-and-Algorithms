class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Prev;

        int first = 0;
        int last = 0;

        int n = nums.size();
        for(int i = 0; i<n; i++){
            int rem = target - nums[i];
            if(Prev.find(rem) != Prev.end()){
                first = Prev[rem];
                last = i;
            }

            Prev[nums[i]] = i; 
        }

        return {first, last};
        
    }
};