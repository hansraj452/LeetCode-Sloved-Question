class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long totalHours = 0;  // Use long long to prevent overflow
            
            for (int p : piles) {
                int hours = (p + mid - 1) / mid;
                totalHours += hours;
            }
            
            if (totalHours > h) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return left;
    }
};