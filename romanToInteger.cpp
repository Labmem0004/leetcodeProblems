#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        vector<int> indice(7); //M, D, C, L, X, V, I
        for (size_t i=0; i<s.size(); i++) {
            switch (s[i]) {
                case 'M':
                    indice[0] += 1;
                    break;
            }
        }
    }
};
