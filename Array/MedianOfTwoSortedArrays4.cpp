class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int i = 0;
        int j = 0;

        vector<int> ans;

        while(i<n && j <m){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }

            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n){
             ans.push_back(nums1[i]);
              i++;
        }

        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }

        int len = ans.size();
        if(len%2 == 0){
            int median1 = (len-1)/2;
            int median2 = (len+1)/2;

            double median = (ans[median1] + ans[median2])/2.0;
            return median;
        }

        else{
            double median = len/2;
            return ans[median]; 
        }

    }
};