#include <iostream>
#include <vector>
using namespace std;
void generateRec(int left, int right, string out, vector<string> &res){
    if(left > right) return;
    if(left == 0 && right == 0){
        res.push_back(out);
    }
    else{
        if(left > 0) generateRec(left - 1, right, out+'(', res);
        if(right > 0) generateRec(left, right-1, out+')', res);
    }
}
vector<string> generateParenthesis(int n) {
    vector<string> res;
    generateRec(n, n, "", res);
    return res;
}

int main(){
    vector<string> PAR =generateParenthesis(10); 
    for(vector<string>::iterator it=PAR.begin();it!=PAR.end();it++){
        cout << *it << endl;
    }
    return  0;
}