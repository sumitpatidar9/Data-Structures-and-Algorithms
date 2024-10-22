

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    {   
        int sum = 0;
        int maxLen = 0;
        unordered_map<long, int> prefix;
        
        for(int i = 0; i<N; i++){
            
            sum = sum + A[i];
            if(sum == K){
                maxLen = max(maxLen, i+1);
            }
            
            long long rem = sum - K;
            if(prefix.find(rem) != prefix.end()){
                maxLen = max(maxLen, i - prefix[rem]);
            }
            
        if (prefix.find(sum) == prefix.end()) {
            prefix[sum] = i;
        }
        
        }
        
        return maxLen;
    } 

};