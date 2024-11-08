class Solution {
public:
    int characterReplacement(string s, int k) {
        
        vector<int> freq(26, 0);
        int i = 0, j = 0, maxLen = 0, maxf = 0;
        int n = s.size();

        while (j < n) {
            freq[s[j] - 'A']++;
            maxf = max(maxf, freq[s[j] - 'A']);

            while ((j - i + 1) - maxf > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
            j++;
        }

        return maxLen;
    }
};
