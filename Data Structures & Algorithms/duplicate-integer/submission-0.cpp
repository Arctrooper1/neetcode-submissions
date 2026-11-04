#include <set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> values;
        for (unsigned int i = 0; i < nums.size(); ++i) {
            if (values.contains(nums.at(i))) {
                return true;
            }
            values.insert(nums.at(i));
        }
        return false;
    }
};