class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> fin;
        int n = nums.size();


        int j = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
    if(j != -1){
        for(int i = j+1; i<n; i++){

            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
    }
};






class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> fin;
        int n = nums.size();


      for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                fin.push_back(nums[i]);
            }
        }

        int size = fin.size();
        for(int i = size-1; i<n; i++){
            fin.push_back(0);
        }

        for(int i = 0; i<n; i++){
            nums[i] = fin[i];
        }

    }
};




        