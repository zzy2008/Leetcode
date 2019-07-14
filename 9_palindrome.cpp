#include <iostream>
using namespace std;
class Solution {
   public:
    bool isPalindrome(int x) {
        if(x<0|| (x!=0 &&x%10==0)) return false;
        long temp = 0;
        while (x>temp) {
            temp = temp * 10 + x % 10;
            x /= 10;
        }
        return (x == temp) || (x==temp/10);
    }
};
int main() {
    Solution s1;
    cout << s1.isPalindrome(123454321);
    return 0;
}