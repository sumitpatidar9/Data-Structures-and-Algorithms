class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector <int> numbers;
        int ele = INT_MIN;
        int n = nums.size();

      
        int i = 0;
        int j = 1;
        int count = 0;

        while(j<n){
            if(nums[i] == nums[j]){
                j++;
            }

            else{
                count++;
                i++;
                nums[i] = nums[j];
            }
        }

        return count+1;
    }
};




class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
 for(int i = 0; i<nums.size(); i++){
            if(ele == nums[i]){
 
            }
            else{
                ele = nums[i];
                numbers.push_back(ele);
            }
        }

        for(int i = 0; i<numbers.size(); i++){
            nums[i] = numbers[i];
        }
    }
};


