#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    if (nums.empty()) return 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] >= target) {
            return i;
        }
    }
    return n;
}
int main() {
    int a[4] = {1, 3, 5, 6};
    vector<int> nums(a, a + 4);
    int index = searchInsert(nums, 4);
    cout << index << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << "\t";
    }
    cout << endl;
    return 0;
}