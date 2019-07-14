	#include <iostream>
	#include <string>
	#include <vector>
	using namespace std;
	string longestCommonPrefix(vector<string> &strs) {
		if (strs.empty()) return "";
		string res = "";
		for (int j = 0; j < strs[0].size(); j++) {
			char c = strs[0][j];
			for (int i = 0; i < strs.size(); i++) {
				if (j >= strs[i].size() || strs[i][j] != c) return res;
			}
			res.push_back(c);
		}
		return res;
	}
	int main() {
		vector<string> strs;
		strs.push_back("flower");
		strs.push_back("flight");
		strs.push_back("flow");
		strs.push_back("fly");
		cout << longestCommonPrefix(strs) << endl;
		return 0;
	}