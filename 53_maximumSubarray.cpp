#include <iostream>
#include <vector>
using namespace std;
int maxSubArray1(vector<int>& nums) {
    int res = INT_MIN, curSum = 0;
    for (int num : nums) {
        curSum = max(curSum + num, num);
        res = max(res, curSum);
    }
    return res;
}

int helper(vector<int>& nums, int left, int right) {
    if (left >= right) return nums[left];
    int mid = left + (right - left) / 2;
    int lmax = helper(nums, left, mid - 1);
    int rmax = helper(nums, mid + 1, right);
    int mmax = nums[mid], t = mmax;
    for (int i = mid - 1; i >= left; --i) {
        t += nums[i];
        mmax = max(mmax, t);
    }
    t = mmax;
    for (int i = mid + 1; i <= right; ++i) {
        t += nums[i];
        mmax = max(mmax, t);
    }
    return max(mmax, max(lmax, rmax));
}
int maxSubArray2(vector<int>& nums) {
    if (nums.empty()) return 0;
    return helper(nums, 0, (int)nums.size() - 1);
}
int main() {
    int a[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums(a, a + 9);
    cout << maxSubArray1(nums) << endl;
    cout << maxSubArray2(nums) << endl;

    return 0;
}