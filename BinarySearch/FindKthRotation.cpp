class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0;
        int high = arr.size()-1;
        int ans;
        int minimum = INT_MAX;
        
        
        while(low <= high){
            
            int mid = (low+high)/2;
            
            if(arr[low] <= arr[high]){
                if(arr[low] < minimum){
                    minimum = arr[low];
                    ans = low;
                }
                
                break;
            }
            
            if(arr[low]<=arr[mid]){
                
                if(arr[low] < minimum){
                    minimum = arr[low];
                    ans = low;
                }
                
                low = mid+1;
            }
            
            else if(arr[mid]<=arr[high]){
                if(arr[mid] < minimum){
                    minimum = arr[mid];
                    ans = mid;
                }
                
                high = mid-1;
            }
        }
        
        return ans;
    }
};
