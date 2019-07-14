#include <iostream>
using namespace std;
string addBinary1(string a, string b) {
    int lena = a.length();
    int lenb = b.length();
    while (lena > lenb) {
        b = '0' + b;
        lenb++;
    }
    while (lena < lenb) {
        a = '0' + a;
        lena++;
    }
    string res(lena, '0');
    for (int i = lena - 1; i > 0; i--) {
        res[i] = a[i] - '0' + b[i];
        if (res[i] >= '2') {
            res[i] = (res[i] - '0') % 2 + '0';
            a[i - 1] = a[i - 1] + 1;
        }
    }
    res[0] = a[0] - '0' + b[0];
    if (res[0] >= '2') {
        res[0] = (res[0] - '0') % 2 + '0';
        res = '1' + res;
    }
    return res;
}
string addBinary2(string a, string b) {
    string res = "";
    int m = a.size() - 1, n = b.size() - 1, carry = 0;
    while (m >= 0 || n >= 0) {
        int p = m >= 0 ? a[m--] - '0' : 0;
        int q = n >= 0 ? b[n--] - '0' : 0;
        int sum = p + q + carry;
        res = to_string(sum % 2) + res;
        carry = sum / 2;
    }
    return carry == 1 ? "1" + res : res;
}
int main() {
    string a = "1001";
    string b = "1101";
    cout << addBinary1(a, b) << endl;
    cout << addBinary2(a, b) << endl;

    return 0;
}