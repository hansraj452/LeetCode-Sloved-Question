class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     int first;
    //     while(k>0){
    //     first = nums[0];
    //     for(int i=0;i<nums.size();i++){
    //         nums[i]=nums[i+1];
    //     }
    //         nums.push_back(first);
    //        k--;
    // }

    
        vector<int> temp(nums.size())  ;
        for(int i = 0 ; i < nums.size() ; i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        
        nums = temp ;
    
  }
};