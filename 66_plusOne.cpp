#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> &digits) {
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] == 9)
            digits[i] = 0;
        else {
            digits[i] += 1;
            return digits;
        }
    }
    if (digits.front() == 0) digits.insert(digits.begin(), 1);
    return digits;
}
int main() {
    int a[4] = {1, 2, 3, 4};
    int b[5] = {1, 3, 2, 9};
    int c[5] = {9, 9, 9, 9};
    vector<int> nums1(a, a + 4);
    vector<int> nums2(b, b + 4);
    vector<int> nums3(c, c + 4);
    plusOne(nums1);
    plusOne(nums2);
    plusOne(nums3);
    for (int i = 0; i <= nums1.size() - 1; i++) cout << nums1[i] << " ";
    cout << endl;
    for (int i = 0; i <= nums2.size() - 1; i++) cout << nums2[i] << " ";
    cout << endl;
    for (int i = 0; i <= nums3.size() - 1; i++) cout << nums3[i] << " ";
    cout << endl;
}