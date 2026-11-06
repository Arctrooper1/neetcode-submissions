class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i)  {
            int match = target - nums[i];
            if (mp.contains(match)) {
                return {mp[match], i};
            }
            mp[nums[i]] = i;
        }
        return {}; 
    }
};
