//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here  // code here
        unordered_map<int , int>count;
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        vector<int>v;
        for(auto it :count){
            if(it.second>1){
                v.push_back(it.first);
            }
        }
        sort(v.begin() , v.end());
        if(v.empty()) 
        return {-1};
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends