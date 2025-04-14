#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int& val) {
        if(nums.empty()) {
            return 0;
        }
        unsigned char size = nums.size();
        unsigned char k = 0;
        for(unsigned char i = 0; i < size; ++i) {
            if(nums[i] != val) {
            nums[k++] = nums[i];
            }
        }
        return k;
    }
};
