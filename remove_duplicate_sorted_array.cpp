#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }
        unsigned short size = nums.size();
        unsigned short k = 1;
        for(unsigned short i = 1; i < size; ++i) {
            if(nums[k-1] == nums[i]) {
                continue;
            }
            nums[k] = nums[i];
            ++k;
        }
        return k;
    }
};
