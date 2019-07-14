#include <iostream>
#include <unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int res = 0, left = -1, n = s.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.count(s[i]) && m[s[i]] > left) {
            left = m[s[i]];
        }
        m[s[i]] = i;
        res = max(res, i - left);
    }
    return res;
}
int main() {
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";
    cout << "s1 = \"abcabcbb\"  " << endl
         << "Output: " << lengthOfLongestSubstring(s1) << endl;
    cout << "s2 = \"bbbbb\"  " << endl
         << "Output: " << lengthOfLongestSubstring(s2) << endl;
    cout << "s3 = \"pwwkew\"  " << endl
         << "Output: " << lengthOfLongestSubstring(s3) << endl;

    return 0;
}