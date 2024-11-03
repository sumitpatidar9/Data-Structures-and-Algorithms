class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int minimum = INT_MAX;

        while(start <= end){
            int mid = (start+end)/2;

            if(nums[start]<=nums[mid]){
                minimum = min(minimum, nums[start]);
                start = mid+1; 
            }

            else if(nums[mid]<= nums[end]){
                minimum = min(minimum, nums[mid]);
                end = mid-1;
            }           
        }

        return minimum;
    }
};