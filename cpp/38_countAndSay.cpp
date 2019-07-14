#include <iostream>
using namespace std;
string countAndSay(int n) {
    if (n <= 0) return "";
    string res = "1";
    while (--n) {
        string cur = "";
        for (int i = 0; i < res.size(); i++) {
            int count = 1;
            while (i + 1 < res.size() && res[i] == res[i + 1]) {
                count++;
                i++;
            }
            cur += to_string(count) + res[i];
        }
        res = cur;
    }
    return res;
}
int main() {
    int n = 20;
    for (int i = 0; i < n; i++) {
        cout << countAndSay(i) << endl;
    }
    return 0;
}