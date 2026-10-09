class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mappy; 
        int maxi = 0;
        int left = 0;
        for (int right = 0; right<s.size(); right++){
            char character = s[right];
            while (mappy[character]>0){
                mappy[s[left]]--;
                left++;
            }
            mappy[character]++; 
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};
