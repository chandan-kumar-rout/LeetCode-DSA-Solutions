class Solution {
    public: 
        int maxSubArray(vector<int>& nums) {
            

            // stores the current subarray sum 
            int currentSum = 0; 

            // stores the maximum subarray sum found so far 
            int maxSum = nums[0]; 


            for(int i = 0; i < nums.size(); i++) 
            {
                // add current element to running sum 
                currentSum += nums[i]; 

                // update maximum sum if needed 
                maxSum = max(maxSum, currentSum); 

                // if running sum becomes negative, start a new subarray 
                if(currentSum < 0) 
                {
                    currentSum = 0;

                }
            }
            return maxSum;
        }
};