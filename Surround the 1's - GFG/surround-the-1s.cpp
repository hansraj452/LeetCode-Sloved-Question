//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int a[]={1,-1,0,0,-1,1,-1,1};
      int b[]={0,0,1,-1,1,-1,-1,1};
      int count=0;
      for(int i=0;i<matrix.size();i++)
          for(int j=0;j<matrix[0].size();j++)
              if(matrix[i][j])
              {   int count_0=0;
                  for(int k=0;k<8;k++)
                  {
                      int x=i+a[k];
                      int y=j+b[k];
                      if(x>=0 && x<matrix.size() && y>=0 && y<matrix[0].size() && matrix[x][y]==0)
                      count_0++;
                  }
                  if(count_0%2==0 && count_0>0)
                      count++;
              }
       return count; // Code here
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends