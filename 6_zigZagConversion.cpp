#include <iostream>
using namespace std;
string convert(string s, int numRows) {
    if (numRows <= 1) return s;
    string res = "";
    int size = 2 * numRows - 2;
    //row i , column j
    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < s.size(); j += size) {
            res += s[j];
            int tmp = j + size - 2 * i;
            if (i != 0 && i != numRows - 1 && tmp < s.size())
                res += s[tmp];  //输出第1至 numRows-1行的中间字符
        }
    }
    return res;
}
int main() {
    string s1 = "PAYPALISHIRING";
    int nRows = 3;
    cout << "s1 " << s1 << endl
         << "Convert to zigzag with " << nRows << " rows." << endl
         << "Output: " << convert(s1, nRows) << endl;
    return 0;
}