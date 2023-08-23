int divfun(vector<int>& nums , int mid);
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
   int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=ceil((double)nums[i]/(double)mid);
            }
            if(sum<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
