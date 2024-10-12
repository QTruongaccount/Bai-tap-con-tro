#include <iostream>
#include <algorithm>
#include <limits> // for std::numeric_limits

using namespace std;

void Sapxepdiem(double *diem, int size) {
    sort(diem, diem + size);
}

double Diemtrungbinh(double *diem, int size) {
    double S = 0;
    for (int i = 0; i < size; i++) {
        S += diem[i];
    }
    return S / size; // Average over all grades
}

int main() {
    int Soluongdiem;
    cout << "Nhap so luong diem kiem tra: "; 

    while (!(cin >> Soluongdiem) || Soluongdiem <= 0) {
        cout << "Nhap so luong diem phai la so nguyen duong: ";
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 
    }

    double *diem = new double[Soluongdiem];

    for (int i = 0; i < Soluongdiem; ++i) {
        do {
            cout << "Nhap diem kiem tra thu " << i + 1 << ": ";
            cin >> diem[i];
            if (diem[i] < 0) {
                cout << "Diem khong duoc la so am. Vui long nhap lai." << endl;
            }
        } while (diem[i] < 0);
    }

    Sapxepdiem(diem, Soluongdiem);
    double a = Diemtrungbinh(diem, Soluongdiem);

    cout << "\nDanh sach diem da sap xep: \n";
    for (int i = 0; i < Soluongdiem; ++i) {
        cout << diem[i] << " ";
    }

    cout << "\nDiem trung binh: " << a << endl; 

    delete[] diem; 
    return 0; 
}
