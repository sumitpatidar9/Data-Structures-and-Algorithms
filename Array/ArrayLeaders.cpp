class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        
        int ele = arr[n-1];
        vector<int> ans;
        ans.push_back(ele);
        
        
        for(int i = n-2; i>=0; i--){
            if(arr[i] >= ele){
                ele = arr[i];
                ans.push_back(ele);
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};