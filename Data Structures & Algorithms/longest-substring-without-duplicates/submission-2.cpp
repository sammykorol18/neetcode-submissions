class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> frequency;
        int left = 0; 
        int maxi = 0;
        for (int right = 0; right<s.size(); right++){
            char character = s[right];
            while (frequency[character]>0){
                frequency[s[left]]--;
                left++; 
            }
            frequency[character]++;
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};
