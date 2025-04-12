#include <string>
#include <unordered_map>

static std::unordered_map<char, short> map{{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

class Solution {
public:
    int romanToInt(std::string& s) {
		unsigned short ans = 0;

        for(unsigned char i = 0; i < s.size(); i++) {
			if(i + 1 < s.size()) {
				if(map[s[i]] < map[s[i+1]]) {
					ans -= map[s[i]];
					continue;
				}
			}
			ans += map[s[i]];
        }

        return ans;
    }
};
