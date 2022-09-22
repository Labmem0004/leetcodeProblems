#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int s = nums.size();
        vector<int> indices(2);
        for (size_t i = 0; i < s - 1; i++)
        {
            for (size_t j = i + 1; j < s; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    indices[0] = i;
                    indices[1] = j;
                }
            }
        }
        return indices;
    }
};

vector<int> inputNums() {
    cout << "请输入一组数:" << endl;
    int value = 0;
    vector<int> numStore;
    while (cin >> value)
    {
        numStore.push_back(value);
    }
    return numStore;
}
int inputTarget() {
    int targetNum = 0;
    cout << "请输入一个目标数字:" << endl;
    cin >> targetNum;
    return targetNum;
}



int main() {
    vector<int> nums;
    int target;
    Solution sol;
    vector<int> indices;
    vector<int> &n = nums;

    nums = inputNums();
    target = inputTarget();
    indices = sol.twoSum(n, target);
    cout << indices[0] << ' ' << indices[1] << endl;
};