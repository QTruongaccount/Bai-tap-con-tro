#include <iostream>
#include <string>

using namespace std;

struct DongDat {
  string ten;
  string viTri;
  int nam;
  double doLon;
  int soNguoiThietMang;
};

int main() {
  // Khai báo mảng ba trận động đất
  DongDat tranDongDat[3];

  // Nhập dữ liệu cho từng trận động đất
  for (int i = 0; i < 3; i++) {
    cout << "\nNhap thong tin cho tran dong dat thu " << i + 1 << ":" << endl;
    cout << "Ten: ";
    getline(cin, tranDongDat[i].ten);
    cout << "Vi tri: ";
    getline(cin, tranDongDat[i].viTri);
    cout << "Nam: ";
    cin >> tranDongDat[i].nam;
    cout << "Do lon (Richter): ";
    cin >> tranDongDat[i].doLon;
    cout << "So nguoi thiet mang: ";
    cin >> tranDongDat[i].soNguoiThietMang;
    cin.ignore(); // Xóa bộ nhớ đệm
  }

  // In ra thông tin các trận động đất
  cout << "\nThong tin cac tran dong dat:\n";
  for (int i = 0; i < 3; i++) {
    cout << "\nTran dong dat thu " << i + 1 << ":" << endl;
    cout << "Ten: " << tranDongDat[i].ten << endl;
    cout << "Vi tri: " << tranDongDat[i].viTri << endl;
    cout << "Nam: " << tranDongDat[i].nam << endl;
    cout << "Do lon: " << tranDongDat[i].doLon << endl;
    cout << "So nguoi thiet mang: " << tranDongDat[i].soNguoiThietMang << endl;
  }

  return 0;
}