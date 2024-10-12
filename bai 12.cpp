#include <iostream>
#include <vector>

using namespace std;

vector<int> LocMang(const vector<int>& a, int b) {
    vector<int> ketqua;
    for (int x : a) {
        if (x % b == 0) {
            ketqua.push_back(x);
        }
    }
    return ketqua;
}

int main() {
    vector<int> a = {10, 14, 21, 28, 35, 42, 50, 63, 70};
    int b = 7;

    vector<int> ketqua = LocMang(a, b);

    cout << "Mang moi chi chua cac gia tri boi so cua " << b << " la: ";
    for (int x : ketqua) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}