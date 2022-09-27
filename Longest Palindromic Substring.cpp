#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() == 1) {
            return s;
        }

        
        int size = s.size();
        Palindrome = s[0];

        /*
        //奇数字符回文判断
        for (size_t i = 1; i < size - 1; i++) {
            temp.clear();
            temp.push_back(s[i]);
            int limit = 0;   //迭代范围确定
            if (i * 2 > size) {limit = size - i - 1;}
            else {limit = i;}
            for (size_t j = 1; j <= limit; j++) {
                if (s[i-j] == s[i+j]) {
                    temp = s.substr(i - j, 2 * j + 1);
                }
                else {break;}
            }
            if (temp.size() > Palindrome.size()) {
                Palindrome = temp;
            }
        }

        //偶数字符回文判断
        if (size > 1) {
            for (size_t i = 0; i < size - 1; i++) {
                temp.clear();
                if (s[i] == s[i+1]) {
                    temp = s.substr(i, 2);
                    int limit = i;   //迭代范围
                    if (size - i - 2 < i) {
                        limit = size - i - 2;
                    }
                    if (limit != 0) {
                        for (size_t j = 1; j <= limit; j++) {
                            if (s[i-j] == s[i+j+1]) {
                                temp = s.substr(i-j, 2*j + 2);
                            }
                            else {break;}
                        }
                    }
                    if (temp.size() > Palindrome.size()) {
                        Palindrome = temp;
                    }
                }
            }
        }
        */

        return Palindrome;
    }

private:
    string Palindrome;   //储存最长回文
    string temp;   //临时储存容器

    int length(string s, int start) {
        for (size_t i = 0; i < s.length(); i++) {
            
        }

    }
};