//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
          int n = s.size();
        string ans;
        int i = 0;
        while(i<n){
            string temp = "";
            while(s[i] =='.' && i<n){
                i++;
            }
            while(s[i] != '.' && i<n){
                temp += s[i];
                i++;
            }
            if(temp.size() >0){
                if(ans.size() == 0)
                    ans = temp;
                else
                    ans =  temp +'.'+ans;
            }
        }
        return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends