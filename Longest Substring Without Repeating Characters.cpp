#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();

        //每次以一个字符为起点向右开始判断是否与左侧字符有重复，重复则停止，取最长字符串长度
        for (size_t i = 0; i < size; i++) {
            bool endOfString = false;   //记录字符串尾端
            for (size_t j = i + temp.size(); j < size && endOfString == false; j++) {
                if (temp.empty()) {
                    temp.push_back(s[j]);
                }
                else {
                    for (size_t k = i; k < j; k++) {
                        if (s[j] == s[k]) {
                            endOfString = true;
                            break;
                        }
                        else if (k == j - 1) {
                            temp.push_back(s[j]);
                        }
                    }
                }
            }
            if (temp.size() > longestSubstring.size()) {
                longestSubstring = temp;
            }
            temp.erase(0, 1);
        }

        return longestSubstring.size();
    }

private:
    string longestSubstring;   //储存最长字符
    string temp;   //临时储存
};

int main() {
    string s = "pwwwkew";
    Solution sol;
    sol.lengthOfLongestSubstring(s);
}