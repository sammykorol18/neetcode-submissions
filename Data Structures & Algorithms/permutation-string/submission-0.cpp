class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0; 
        bool flag = false; 
        unordered_map<char, int> starter;
        for (int i=0; i<s1.size(); i++){
            starter[s1[i]]++;
        }
        unordered_map<char, int>copy = starter;
        for (int right=0; right<s2.size(); right++){
            char character = s2[right];
            if (copy.find(character) == copy.end()){
                left=right+1; 
                starter = copy; 
                continue;
            }
            while (starter[character] == 0) {
                starter[s2[left]]++;
                left++;
            }
            starter[character]--;
            if (right - left +1 == s1.size()){
                flag = true; 
            }

    }
    return flag;
}
};
