class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> char_map; 
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++) 
    {
        if (char_map.find(s[right]) != char_map.end()) 
        {
            left = max(left, char_map[s[right]] + 1);
        }

        char_map[s[right]] = right;

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;



    }
};
