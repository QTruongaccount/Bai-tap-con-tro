#include <iostream>
#include <string>

using namespace std;

// Khai báo cấu trúc Máy tính
struct MayTinh {
  float xungNhip;
  int soLoi;
  int dungLuongRAM; 
  int dungLuongHDD; 
  int diemHieuNang;
  double gia; 
};

int main() {
  // Khai báo biến mayTinh thuộc kiểu Máy tính
  MayTinh mayTinh;

  // Nhập thông tin máy tính
  cout << "Nhap toc do xung nhip (GHz): ";
  cin >> mayTinh.xungNhip;

  cout << "Nhap so loi cua CPU: ";
  cin >> mayTinh.soLoi;

  cout << "Nhap dung luong RAM (GB): ";
  cin >> mayTinh.dungLuongRAM;

  cout << "Nhap dung luong o cung (GB): ";
  cin >> mayTinh.dungLuongHDD;

  cout << "Nhap diem danh gia hieu nang: ";
  cin >> mayTinh.diemHieuNang;

  cout << "Nhap gia cua may tinh (USD): ";
  cin >> mayTinh.gia;

  // Hiển thị thông tin máy tính
  cout << "\nThong tin may tinh:\n";
  cout << "Toc do xung nhip: " << mayTinh.xungNhip << " GHz\n";
  cout << "So loi: " << mayTinh.soLoi << endl;
  cout << "Dung luong RAM: " << mayTinh.dungLuongRAM << " GB\n";
  cout << "Dung luong o cung: " << mayTinh.dungLuongHDD << " GB\n";
  cout << "Diem danh gia hieu nang: " << mayTinh.diemHieuNang << endl;
  cout << "Gia: " << mayTinh.gia << " Trieu Dong\n";

  return 0;
}