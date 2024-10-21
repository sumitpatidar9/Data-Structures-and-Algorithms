class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        int n = arr.size();
        
        if(n<2) return -1;
        
        for(int i = 0; i<n; i++){
            if(largest < arr[i]){
                secondLargest = largest;
                largest = arr[i];
            }
            
            else if(secondLargest < arr[i] && largest != arr[i]){
                secondLargest = arr[i];
            }
        }
        
        if (secondLargest == INT_MIN) 
        return -1;
        
        return secondLargest;
    }
};