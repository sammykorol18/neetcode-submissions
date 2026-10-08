class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0; 
        unordered_map<char, int> tracker;
        int maxfreq = 0;
        int maxi = 0;
        for (int right=0; right<s.length(); right++){
            tracker[s[right]]++;
            maxfreq = max(maxfreq, tracker[s[right]]);
            while (right-left+1 - maxfreq > k){
                tracker[s[left]]--;
                left++;
            }
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};
