#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
    int i = 0, j = height.size() - 1;
    int res = 0;
    while (i < j) {
        res = max(res, min(height[i], height[j]) * (j - i));
        height[i] < height[j] ? i++ : j--;
    }
    return res;
}
int main() {
    int a[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> height1(9);
    vector<int> height2(a, a + 9);
    cout << height1.size() <<"\t" << height2.size() <<endl;
    for (int i = 0; i < 9; i++) {
        height1.push_back(a[i]);
    }
    cout << maxArea(height1) << endl;
    cout << maxArea(height2) << endl;
    return 0;
}