class Solution {
public:
    bool isAnagram(string s, string t) {
         
             if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> charCount;

        // Count characters in string s and store them in the unordered_map.
        for (char c : s) {
            charCount[c]++;
        }

        // Check if string t has the same character counts.
        for (char c : t) {
            if (charCount.find(c) != charCount.end()) {
                charCount[c]--;
                if (charCount[c] == 0) {
                    charCount.erase(c);
                }
            } else {
                // If a character in t is not in the unordered_map, it's not an anagram.
                return false;
            }
        }

        // If the unordered_map is empty, both strings are anagrams.
        return charCount.empty();
   
        
        
    }
};