class Solution {
    public: 
        void rotate(vector<int>& nums, int k) {
            
            
            int n = nums.size(); 

            // if k is larger than array size, only the remainder matters 
            k = k % n; 

            // step 1: 
            // reverse the entire array 
            reverse(nums.begin(), nums.end()); 

            // example: 
            // [1,2,3,4,5,6,7] 
            // becomes 
            // [7,6,5,4,3,2,1] 


            //step 2: 
            // reverse the first k elements 
            reverse(nums.begin(), nums.begin() + k); 

            // example: 
            // [7, 6,5,4,3,2,1] 
            // becomes 
            // [5, 6, 7,4,3,2,1] 

            // step 3: 
            // reverse the remaining elements 
            reverse(nums.begin() + k, nums.end()); 

            // example: 
            // [5,6,7,4,3,2,1] 
            // becomes 
            // [5,6,7,1,2,3,4] 


        }
};