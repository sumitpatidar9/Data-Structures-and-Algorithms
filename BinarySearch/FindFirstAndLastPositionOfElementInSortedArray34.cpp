class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = 0;
        int last = nums.size()-1;
        vector<int> ans(2,-1);


        while(first<=last){
            int mid = (first+last)/2;

            if(nums[mid] == target){
                ans[0] = mid;
                last = mid-1;
            }

            else if(nums[mid] >= target){
                last = mid-1;
            }

            else{
                first = mid+1;
            }
        }

        first = 0;
        last = nums.size()-1;

        while(first<=last){
            
            int mid = (first+last)/2;

            if(nums[mid] == target){
                ans[1] = mid;
                first = mid+1;
            }

            else if(nums[mid] >= target){
                last = mid-1;
            }

            else{
                first = mid+1;
            }
        }

    return ans;

    }
};