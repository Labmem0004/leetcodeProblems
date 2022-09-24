#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
       int iniPoint = 0;   //循环开始的起点
       int size = s.size();
       int value = 0;   // s代表的值
       
       //千位数计算
       if (s[0] == 'M') {
        for (size_t i = iniPoint; s[i] == 'M'; i++) {
            value += 1000;
            iniPoint += 1;
        }
       }

       //百位数计算 
       if (s[iniPoint] == 'C') {
        if (s[iniPoint+1] == 'M') {
            value += 900;
            iniPoint += 2;
        }
        else if (s[iniPoint+1] == 'D') {
            value += 400;
            iniPoint += 2;
        }
        else {
            for (size_t i = iniPoint; s[i] == 'C'; i++) {
                value += 100;
                iniPoint += 1;
            }
        }
       }
       else if (s[iniPoint] == 'D') {
        value += 500;
        iniPoint += 1;
        for (size_t i = iniPoint; s[i] == 'C'; i++) {
            value += 100;
            iniPoint += 1;
        }
       }

       //十位数计算
       if (s[iniPoint] == 'X') {
        if (s[iniPoint + 1] == 'C') {
            value += 90;
            iniPoint += 2;
        }
        else if (s[iniPoint + 1] == 'L') {
            value += 40;
            iniPoint += 2;
        }
        else {
            for (size_t i = iniPoint; s[i] == 'X'; i++) {
                value += 10;
                iniPoint += 1;
            }
        }
       }
       else if (s[iniPoint] == 'L') {
        value += 50;
        iniPoint += 1;
        for (size_t i = iniPoint; s[i] == 'X'; i++) {
            value += 10;
            iniPoint += 1;
        }
       }

       //个位数计算
       if (s[iniPoint] == 'I') {
        if (s[iniPoint + 1] == 'X') {
            value += 9;
            iniPoint += 2;
        }
        else if (s[iniPoint + 1] == 'V') {
            value += 4;
            iniPoint += 2;
        }
        else {
            for (size_t i = iniPoint; s[i] == 'I'; i++) {
                value += 1;
                iniPoint += 1;
            }
        }
       }
       else if (s[iniPoint] == 'V') {
        value += 5;
        iniPoint += 1;
        for (size_t i = iniPoint; s[i] == 'I'; i++) {
            value += 1;
            iniPoint += 1;
        }
       }

       return value;
    }
};
 
int main () {
    Solution sol;
    int integer = sol.romanToInt("MCMXCIV");
    cout << integer;

    return 0;
}