#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
   public:
    vector<int> twoSum1(vector<int>& nums, int target) {
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ret = {i, j};
                    return ret;
                }
            }
        }
        return ret;
    }
    vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int> ret;
        map<int, int> myMap;

        for (int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            if (myMap.find(t) != myMap.end()) {
                ret.push_back(myMap[target - nums[i]]);
                ret.push_back(i);
                return ret;
            } else {
                myMap[nums[i]] = i;
            }
        }
        return ret;
    }
};
int main() {
    cout << "H" << endl;
    vector<int> test = {3, 2, 4};
    Solution s1;
    cout << "Solution1:" << endl;
    for (auto&& i : s1.twoSum1(test, 6)) cout << i << ' ';
    cout << endl;
    cout << "Solution2:" << endl;
    for (auto&& i : s1.twoSum2(test, 6)) cout << i << ' ';
    return 0;
}