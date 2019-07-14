#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) nums[res++] = nums[i];
    }
    return res;
}
int main() {
    int a[8] = {0, 1, 2, 2, 3, 0, 4, 2};
    vector<int> nums(a, a + 8);
    int len = removeElement(nums, 2);
    cout << "Length: " << len << endl;
    for (int i = 0; i < len; i++) {
        cout << nums[i] << "\t";
    }
    cout << endl;
    return 0;
}