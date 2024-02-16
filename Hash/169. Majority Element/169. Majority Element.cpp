class Solution {
public:
    int majorityElement(vector<int>& nums) {
        set<int> num_list(nums.begin(), nums.end()); 
        
        for (const auto &n : num_list) {
            if (count (nums.begin(), nums.end(), n) > nums.size()/2) return n;
        }
        return 0;
    }
};
