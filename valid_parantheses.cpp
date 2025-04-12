#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        if(s.size() < 2) {
			return false;
		}

		unsigned char bucket[s.size()];
		unsigned short bi = 0;

		for(unsigned short i = 0; i < s.size(); i++) {
			if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
				bucket[bi] = s[i];
				bi++;
				continue;
			}
			if(s[i] == ')') {
				if(bi > 0 && bucket[bi-1] == '(' ) {
					bucket[bi-1] = '\0';
					bi--;
					continue;
				}
				return false;
			}
			if(s[i] == '}') {
				if(bi > 0 && bucket[bi-1] == '{' ) {
					bucket[bi-1] = '\0';
					bi--;
					continue;
				}
				return false;
			}
			if(s[i] == ']') {
				if(bi > 0 && bucket[bi-1] == '[' ) {
					bucket[bi-1] = '\0';
					bi--;
					continue;
				}
				return false;
			}
		}

		return bucket[0] == '\0';

    }
};
