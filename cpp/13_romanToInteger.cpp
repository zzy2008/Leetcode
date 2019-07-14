//题目说明输入一定是Roman，无须判断其是否为Roman
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int romanToInt(string s) {
    int res = 0;
    map<char, int> m{{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                     {'C', 100}, {'D', 500}, {'M', 1000}};
    for (int i = 0; i < s.size(); ++i) {
        int val = m[s[i]];
        //如果当前字符是最后一个或者其比下一个字符大，则加上当前字符，其他情况减去当前字符
        if (i == s.size() - 1 || m[s[i + 1]] <= m[s[i]])
            res += val;
        else
            res -= val;
    }
    return res;
}
int main() {
    string s = "MCMXCIV";  // 1994
    cout << romanToInt(s) << endl;
    return 0;
}