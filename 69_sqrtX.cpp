#include <iostream>
using namespace std;
int mySqrt_binarySearch(int x) {
    // res*res may out of integer
    long long i = 0;
    long long j = x / 2 + 1;
    while (i <= j) {
        long long mid = (i + j) / 2;
        long long res = mid * mid;
        if (res == mid)
            return mid;
        else if (res < x)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return j;
}
int mySqrt_newtom(int x) {
    if (x == 0) return 0;
    long res = x;
    while (res*res > x) {
        res = (res + x / res) / 2;
    }
    return res;
}
int main() {
    int x = 37;
    int y = 399;
    cout << mySqrt_binarySearch(x) << "\t" << mySqrt_binarySearch(y) << endl;
    cout << mySqrt_newtom(x) << "\t" << mySqrt_newtom(y) << endl;
    return 0;
}