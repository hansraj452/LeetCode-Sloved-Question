//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t ){
        
        // Your code here
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
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends