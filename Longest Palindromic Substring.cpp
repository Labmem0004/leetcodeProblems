#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) { 
        if (s.length() == 1) {
            return s;
        }
        else if (s.length() == 2) {
            if (s[0] == s[1]) {
                return s;
            }
            else {
                s.erase(1, 1);
                return s;
            }
        }
        
        /*
        if (s[0] == s[1]) {
            Palindrome = s.substr(0, 2);
        }

        for (size_t i = 1; i < s.length() - 1; i++) {
            int len1 = palindromeLength(s, i-1, i+1);
            int len2 = palindromeLength(s, i, i+1);
            if (len1 >= len2) {
                
            }
        }
        */
       
        int start = 0, end = 0;
        if (s[0] == s[1]) {
            end = 1;
        }
        for (size_t i = 1; i < s.length() - 1; i++) {
            int len1 = palindromeLength(s, i-1, i+1);
            int len2 = palindromeLength(s, i, i+1);
            if (len1 >= len2) {
                if (len1 > end - start + 1) {
                    start = i - (len1-1)/2;
                    end = i + (len1-1)/2;
                }
            }
            else {
                if (len2 > end - start + 1) {
                    start = i - len2/2 + 1;
                    end = i + len2/2;
                }
            }
            /*    
            旧算法
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
            */
        }

        //偶数字符回文判断
        /*
        for (size_t i = 0; i < s.length() - 1; i++) {
            
            /*
            旧算法
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
        */

        return s.substr(start, end - start + 1);
    }

private:    
    int palindromeLength(string s, int left, int right) {
        int L = left, R = right;
        while (L >= 0 && R < s.length() && (s[L] == s[R])) {
            L--;
            R++;
        }
        return R-L-1;
    }
};

int main() {
    Solution sol;
    string s = "babad";
    string palindromeString = sol.longestPalindrome(s);
    cout << palindromeString << endl;
    cout << s.length() << endl;
}