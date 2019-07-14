#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int pre = 0, cur = 0;
    while (cur < nums.size()) {
        if (nums[cur] == nums[pre])
            cur++;
        else
            nums[++pre] = nums[cur++];
    }
    return pre + 1;
}
int main() {
    int a[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> nums(a, a + 10);
    int len = removeDuplicates(nums);
    cout << "Length: " << len << endl;
    for (int i = 0; i < len; i++) {
        cout << nums[i] << "\t";
    }
    cout << endl;
    return 0;
}