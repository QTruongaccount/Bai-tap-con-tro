#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

struct HocSinh {
    std::string ten;
    double diem;
};

void NhapDiemVaTen(std::vector<HocSinh>& hocsinh) {
    for (int i = 0; i < hocsinh.size(); ++i) {
        cout << "Nhap ten hoc sinh thu " << i + 1 << ": ";
        cin >> hocsinh[i].ten;
        do {
            cout << "Nhap diem kiem tra cho " << hocsinh[i].ten << ": ";
            cin >> hocsinh[i].diem;
            if (hocsinh[i].diem < 0) {
                cout << "Diem khong duoc la so am. Vui long nhap lai." << endl;
            }
        } while (hocsinh[i].diem < 0);
    }
}

double DiemTrungBinh(const std::vector<HocSinh>& hocsinh) {
    double tongDiem = 0;
    for (const auto& hs : hocsinh) {
        tongDiem += hs.diem;
    }
    return tongDiem / hocsinh.size();
}

int main() {
    int Soluonghocsinh;
    cout << "Nhap so luong hoc sinh: ";
    cin >> Soluonghocsinh;

    if (Soluonghocsinh <= 0) {
        cout << "So luong hoc sinh phai lon hon 0" << endl;
        return 1;
    }

    std::vector<HocSinh> hocsinh(Soluonghocsinh);

    NhapDiemVaTen(hocsinh);

    std::sort(hocsinh.begin(), hocsinh.end(), [](const HocSinh& a, const HocSinh& b) {
        return a.diem > b.diem;
    });

    cout << "\nDanh sach diem da sap xep:\n";
    for (const auto& hs : hocsinh) {
        cout << hs.ten << ": " << hs.diem << endl;
    }

    double a = DiemTrungBinh(hocsinh);
    cout << "\nDiem trung binh: " << a << endl;

    return 0;
}