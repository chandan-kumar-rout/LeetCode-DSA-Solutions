class Solution {
    public: 
        vector<int> twoSum(vector<int>& nums, int target) {
            // step 1: create a hash map (diary). 
            // key (first int) stores the number from the array. 
            // value (second int ) stores the index of that number. 
            unordered_map<int, int> numMap; 

            // step 2: loop through each element in the array one by one. 
            for (int i = 0; i < nums.size(); ++i) {
                

                // step 3: calculate the partner number (complement) needed to  reach the target. 
                // example: if target is 9 and current number is 2, complement = 9 - 2 = 7. 
                int complement = target - nums[i]; 

                // step 4: check if this complement already exists in our hash map.
                // numMap.end() represents the boundary / end of the map. 
                // if find() does NOT reach the end, it means the complement was found!
                if (numMap.find(complement) != numMap.end()) {


                    // step 5: since the complement exists, we found our pair! 
                    // return a new vector containing: 
                    // 1. the index of the complement (retrieved from the map). 
                    // 2. the current index 'i'. 
                    return {numMap[complement], i};
                }
                // step 6: if the complement was not found, save the current number and its index into the map so future numbers can look it up. 
                numMap[nums[i]] = i; 
            }

            // step 7: return an empty vector if no solutions is found. 
            // according to the problem constraints, this line will never ne reached because exactly one valid solutions is guaranteed to exist. 
            return {};
        }
};