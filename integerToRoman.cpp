#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    string intToRoman(int num) {
        string s;   //储存最终的罗马数字
        //string n = to_string(num);
        //int size = n.size();
        int rem = 0;   //储存余数
        int indice = 0;   //工具数字

        //计算千位数
        if (num >= 1000) {
            rem = num % 1000;
            indice = (num - rem) / 1000;
            s.append(indice, 'M');
            num = rem;
        }
        

        //计算百位数
        if (num >= 900) {
            s.append("CM");
            num -= 900;
        }
        else if (num >= 500) {
            s.append("D");
            num -= 500;
            if (num >= 100) {
                rem = num % 100;
                indice = (num - rem) / 100;
                s.append(indice, 'C');
                num = rem;
            }
        }
        else if (num >= 400) {
            s.append("CD");
            num -= 400;
        }
        else if (num >= 100) {
            rem = num % 100;
            indice = (num - rem) / 100;
            s.append(indice, 'C');
            num = rem;
        }

        //计算十位数
        if (num >= 90) {
            s.append("XC");
            num -= 90;
        }
        else if (num >= 50) {
            s.append("L");
            num -= 50;
            if (num >= 10) {
                rem = num % 10;
                indice = (num - rem) / 10;
                s.append(indice, 'X');
                num = rem;
            }
        }
        else if (num >= 40) {
            s.append("XL");
            num -= 40;
        }
        else if (num >= 10) {
            rem = num % 10;
            indice = (num - rem) / 10;
            s.append(indice, 'X');
            num = rem;
        }

        //计算个位数
        if (num == 9) {
            s.append("IX");
        }
        else if (num >= 5) {
            s.append("V");
            num -= 5;
            s.append(num, 'I');
        }
        else if (num == 4) {
            s.append("IV");
        }
        else {
            s.append(num, 'I');
        }

        return s;
    }
};

int main() {
    Solution sol;
    sol.intToRoman(3);

    return 0;
}