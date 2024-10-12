#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double Hamtinh(vector<int>& a) {
    int n = a.size();
    nth_element(a.begin(), a.begin() + n / 2, a.end());

    if (n % 2 == 1) { 
        return a[n / 2];
    } else {
        nth_element(a.begin(), a.begin() + n / 2 - 1, a.end());
        return (a[n / 2 - 1] + a[n / 2]) / 2.0;
    }
}

int main() {
    vector<int> data1 = {3, 1, 4, 2, 5}; 
    cout << "Median cua data: " << Hamtinh(data1) << endl; 

    return 0;
}