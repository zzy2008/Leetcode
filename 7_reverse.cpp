#include <iostream>
using namespace std;
class Solution {
   public:
    int reverse(int x) {
        long result = 0;
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        return (result > INT_MAX || result < INT_MIN) ? 0 : result;
    }
};
int main() {
    Solution s1;
    cout << s1.reverse(123) << endl;
    return 0;
}