#include <iostream>
using namespace std;

struct SeqList {
    int *data;
    int Maxsize, length;
};

bool ListInsert(SeqList &L, int i, int e) {
    if (i < 1 || i > L.length + 1) return false;
    if (L.length >= L.Maxsize) return false;
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}
int main(){
    cout << "Luv & Peace" << endl;
    return 0;
}