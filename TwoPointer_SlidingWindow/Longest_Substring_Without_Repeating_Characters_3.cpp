class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;

        int n = s.size();
        int maximum = 0;
        
        vector<int> hash(256, -1);

        if(s == "") return 0;
        if(s == " ") return 1;

        while(j<n){
            if(hash[s[j]] != -1){
                if(hash[s[j]] >= i){
                    i = hash[s[j]] + 1;
                }
            }
            
            hash[s[j]] = j;
            maximum = max(maximum, j-i+1);
            j++;
        }

        return maximum;  
    }
};