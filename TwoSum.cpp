class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
    
    unordered_map<int, int> hashmap;
    
    bool found = false;
    int index1 = -1, index2 = -1;
    
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // K
        if (hashmap.find(complement) != hashmap.end()) {
            index1 = hashmap[complement];
            index2 = i;
            found = true;
            break;
        }
        
        
        hashmap[nums[i]] = i;
    }
