#include <vector>
#include <unordered_map>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int& target) {
		std::unordered_map<int, int> umap;
		for(int i = 0; i < nums.size(); i++) {
			if(auto it = umap.find(target - nums[i]); it != umap.end()) {
				return {it->second, i};
			} else {
				umap[nums[i]] = i;
			}
		}
		return {};
	}
};
