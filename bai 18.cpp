#include <iostream>
#include <string>

using namespace std;

struct CauTrichDan {
  string tacGia;
  string noiDung;
  int luotThich;
};

int main() {
  CauTrichDan trichDan;

  cout << "Nhap tac gia: ";
  getline(cin, trichDan.tacGia);

  cout << "Nhap noi dung cau trich dan: ";
  getline(cin, trichDan.noiDung);

  cout << "Nhap so luot thich: ";
  cin >> trichDan.luotThich;

  cout << "\nThong tin cau trich dan:\n";
  cout << "Tac gia: " << trichDan.tacGia << endl;
  cout << "Noi dung: " << trichDan.noiDung << endl;
  cout << "Luot thich: " << trichDan.luotThich << endl;

  return 0;
}