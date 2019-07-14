// Only the parentheses
#include <iostream>
#include <stack>
using namespace std;
bool isValid1(string s) {
    if (s == "") return true;
    stack<char> parentheses;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            parentheses.push(s[i]);
        else {
            if (s[i] == ')' && parentheses.top() != '(') return false;
            if (s[i] == ']' && parentheses.top() != '[') return false;
            if (s[i] == '}' && parentheses.top() != '{') return false;
            parentheses.pop();
        }
    }
    return parentheses.empty();
}
bool isValid2(string s) {
    stack<char> parentheses;
    for (char& c : s) {
        switch (c) {
            case ('('):
            case ('['):
            case ('{'):
                parentheses.push(c);
                break;
            case (')'):
                if (parentheses.empty() || parentheses.top() != '(')
                    return false;
                else
                    parentheses.pop();
                break;
            case (']'):
                if (parentheses.empty() || parentheses.top() != '[')
                    return false;
                else
                    parentheses.pop();
                break;
            case ('}'):
                if (parentheses.empty() || parentheses.top() != '{')
                    return false;
                else
                    parentheses.pop();
                break;
        }
    }
    return parentheses.empty();
}
int main() {
    string s1 = "{[{[([])]}]}";
    string s2 = "{]";
    cout << "Method1:" << endl
         << "s1: " << boolalpha << isValid1(s1) << "  "
         << "s2:" << isValid1(s2) << endl;
    cout << "Method2:" << endl
         << "s1: " << boolalpha << isValid2(s1) << "  "
         << "s2:" << isValid2(s2) << endl;
    return 0;
}