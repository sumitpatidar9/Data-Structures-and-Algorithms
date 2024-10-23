class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;

        int area = 0;
        int maximum = INT_MIN;

        while(i<j){
            if(height[i] < height[j]){
                area = height[i]*(j-i);
                i++;
            }

            else{
                area = height[j]*(j-i);
                j--;
            }
            
            maximum = max(maximum, area);
        }

        return maximum;
    }
};