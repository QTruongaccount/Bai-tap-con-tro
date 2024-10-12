#include <iostream>
#include <vector>

using namespace std;

vector<int> tachMang(const vector<int>& a) {
    int Size1 = (a.size() + 1) / 2;
    vector<int> a1(Size1);
    int j = 0;
    for (int i = 1; i < a.size(); i += 2) {
        a1[j++] = a[i];
    }
    return a1;
}

int main() {
    vector<int> a = {10, 20, 30, 40, 50, 60};
    vector<int> a1 = tachMang(a);
    cout << "Mang moi chua cac gia tri o vi tri chan: ";
    for (int x : a1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}