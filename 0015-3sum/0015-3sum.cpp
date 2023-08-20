class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        
//         for(int i=0;i<nums.size()-1;i++){
//             if( i>0 && nums[i] == nums[i-1]) continue;
//              int lef = i+1;
//               int rig =  nums.size()-1;
//               while(lef<rig){
//                  int sum = nums[i]+nums[lef]+nums[rig];
//                   if(sum  < 0){
//                       lef++;
//                   }
//                   else if(sum>0){
//                       rig--;
//                   }
//                   else{
//                       vector<int>v ={nums[i] , nums[lef] ,nums[rig]};;
//                       ans.push_back(v);
//                       lef++;
//                       rig--;
//                   }
//                   while(lef < rig && nums[lef] == nums[lef-1])
//                       lef++;
                  
//                   while(lef<rig && nums[rig] == nums[rig+1])
                      
//                      rig--;
//               }       
                                  
                                     
//         }
//             return ans;
         int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(int i=0; i<n-1; i++){
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    output.push_back({nums[i], nums[low], nums[high]});
                    int tempIndex1 = low, tempIndex2 = high;
                    while(low < high && nums[low] == nums[tempIndex1]) low++;
                    while(low < high && nums[high] == nums[tempIndex2]) high--;
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return output;
    }
};
    