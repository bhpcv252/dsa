#include <vector>

class Solution {
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs) {
        unsigned char lcp[strs[0].size() + 1];
        memcpy(lcp, strs[0].data(), strs[0].size());
        lcp[strs[0].size()] = '\0';

        for(unsigned char i = 1; i < strs.size(); i++) {
			if(strs[i].size() < (sizeof(lcp) - 1)) {
				lcp[strs[i].size()] = '\0';
			}
            for(unsigned char j = 0; j < strs[i].size(); j++) {
                if(strs[i][j] != lcp[j]) {
                    lcp[j] = '\0';
                    break;
                }
            }
        }

        return std::string(reinterpret_cast<char*>(lcp));
    }
};

