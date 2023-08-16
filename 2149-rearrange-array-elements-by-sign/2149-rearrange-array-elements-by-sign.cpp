class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int postiveindex = 0;
        int neagtiveindex = 1;
          int n = nums.size();
        vector<int>ans(n, 0);
      
        for(int i=0;i<n;i++){
            if(nums[i] < 0){
                ans[neagtiveindex]  = nums[i];
                neagtiveindex += 2; 
            }
            else{
                ans[postiveindex] = nums[i];
                postiveindex += 2;
            }
        }
        return ans;

    }
};