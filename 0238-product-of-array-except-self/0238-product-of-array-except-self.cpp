class Solution {
    public: 
        vector<int> productExceptSelf(vector<int>& nums) {

            int n = nums.size(); 

            // Result array initialized with 1 
            vector<int> answer(n, 1);


            // Stores pruduct of elements to the left 
            int prefix = 1; 

            // first pass:  build prefix products 
            for(int i = 0; i < n; i++) 
            {
                // stores left-side product 
                answer[i] = prefix; 

                // update prefix product 
                prefix *= nums[i]; 
            } 

            // stores product of elements to the right 
            int suffix = 1; 

            // second pass: multiply right-side products 
            for(int i = n -1; i >= 0; i--) 
            {
                // multiply prefix and suffix 
                answer[i] *= suffix; 

                // update suffix product 
                suffix *= nums[i]; 
            }
            return answer;
        }
};