#include <iostream>
#include <vector>
using namespace std;
string intToRoman(int num) {
    string res = "";
    vector<char> roman{'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    vector<int> value{1000, 500, 100, 50, 10, 5, 1};
    for (int n = 0; n < 7; n += 2) {
        int x = num / value[n];
        if (x < 4) {
            for (int i = 0; i < x; i++) res += roman[n];
        } else if (x == 4) {
            res = res + roman[n] + roman[n - 1];
        } else if (x > 4 && x < 9) {
            res += roman[n - 1];
            for (int i = 6; i <= x; i++) {
                res += roman[n];
            }
        } else if (x == 9) {
            res = res + roman[n] + roman[n - 2];
        }
        num %= value[n];
    }
    return res;
}
int main() {
    int num = 1994;
    // MCMXCIV
    cout << intToRoman(num) << endl;
    return 0;
}